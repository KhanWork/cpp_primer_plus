### 为什么返回引用

首先，让我们看一下返回引用与传统的返回机制有什么不同点。后者的工作方式，类似于函数传参时的值传递。在概念上，这个值首先赋值到一个临时位置，之后调用函数的程序使用这个值，考虑下面的例子:

```cpp
double m = sqrt(16.0);
cout << sqrt(25.0);
```

在第一个语句中，值 4.0 首先被复制到一个临时位置，之后这个位置的值再被复制给 `m` 变量。而在第二条语句中，值 5.0 首先被复制到一个临时位置，然后该位置的内容被传递给 `cout` (当然，这只是概念描述，在实际上，编译器可能会编译优化掉上面的某些步骤)。

现在考虑下面的语句:

```cpp
dup = accumulate(team, five);

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    return target;
}
```

如果 `accumulate()` 返回一个结构体，而不是该结构体的引用，这将会涉及将整个结构体复制到一个临时位置，之后再将这个位置中的所有内容复制给 `dup` 变量。若使用引用返回值，`team` 直接复制给 `dup`，是一种更加高效的方式。

### 小心使用引用返回值

当返回引用时，应该牢记尽量避免返回到会在函数终止时会被消除的内存位置。

```cpp
const free_throws & clone2(free_throws ft)
{
    free_throws newguy;
    newguy = ft;
    return newguy;
}
```

上面这段程序会返回临时变量 `newguy`，但是它在函数执行结束后就不存在了。相似的是，用户应该避免类似的指针变量返回情况。

### 为什么在引用返回中使用 `const`

一般情况返回是值，而值是不能通过地址访问的。这样的表达式可以在赋值语句的右侧出现，而不是在赋值语句的左侧。

```cpp
accumulate(dup, five) = four;
```







