## 操作符过载

Table 11.1 可以重载的操作符

| +    | -    | *    | /      | %      | ^         |
| ---- | ---- | ---- | ------ | ------ | --------- |
| &    | \|   | ~    | !      | =      | <         |
| >    | +=   | -=   | *=     | /=     | %=        |
| ^=   | &=   | \|=  | <<     | >>     | >>=       |
| <<=  | ==   | !=   | <=     | >=     | &&        |
| \|\| | ++   | --   | ,      | ->*    | ->        |
| ()   | []   | new  | delete | new [] | delete [] |



## 友员

`C++` 保护类对象的私有成员。通常，类公有方法做为唯一的访问途径，有时候这种限制是有点严苛的，不利于解决某些程序问题。基于这个原因，`C++` 提供了另一种访问方法：`friend`，友元有如下三种变体：

* 友元函数
* 友元类
* 友元成员函数

这里仅介绍友元函数，通常在过载一个二元操作符时，会需要友元。

在我们的例子中，`Time` 类的乘法，对乘法操作符进行过载，而这次过载是在两种不同的类型之间进行乘法操作。带来一个问题，显然我们的乘法操作对于两个操作数的出现顺序显然是没有关系的，但是在我们的例子中出现了下面的问题:

```cpp
A = B * 2.75;
```

将会转化为下面的成员函数调用类型:

```cpp
A = B.operator*(2.75)
```

但是，如果使用下面的语句，就有问题了:

```cpp
A = 2.75 * B;
```

一种解决这个问题的方法是，告知所有使用者，只能使用 `B * 2.75` 形式，而不是另一种，显然这不是我们面向对象编程的设计初衷。

另一种解决方法是使用一个非成员函数，一个非成员函数不由对象调用，它使用的任何值包括对象为都是显式参数。因此编译器可以匹配表达式:

```cpp
A = 2.75 * B;
```

这个函数有下面的函数原型:

```cpp
Time operator*(double m, const Time & t);
```

使用非成员过载操作符函数，配合原有的成员函数，两个顺序的操作数的操作都可行的了。

然而，非成员函数不能直接访问类中的私有数据，但是我们可以使用一种特殊的方法，称作 `friend`，这就能够访问类的私有成员了。

### 创建友元

使用 `friend` 关键字创建友元:

```cpp
friend Time operator*(double m, const Time & t); // goes in class declaration
```

这个原型有两个隐式含义:

* 虽然 `operator()` 在类中声明，但它不是成员函数，因此它不会被成员操作符嗲用
* 虽然 `operator()` 不是一个成员函数，它具有成员函数相同的访问权限

### 一个通用的友元: `<<` 操作符过载

假设 `trip` 是我们要展示的对象，使用友元，可以以下面的顺序使用 `<<` 过载:

```cpp
cout << trip;
```

而不是下面的顺序:

```cpp
trip << cout;
```

