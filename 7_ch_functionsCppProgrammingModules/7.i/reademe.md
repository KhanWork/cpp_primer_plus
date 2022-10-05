## 指向函数的指针

函数与数据项一样具有地址。函数的地址是存储函数起始位置机器码的内存地址。通常情况下，用户没有必要知道这个地址的确切位置，但是对于程序而言，这个地址至关重要。比如，将函数的地址作为参数传入另一个函数。这允许拿到函数地址的函数能够查找那个函数并运行这个函数。这允许在不同情况下运行不同的函数。

### 函数指针基础

* 获取函数的地址
* 声明指向函数的指针
* 使用函数指针调用函数

#### 获取函数的地址

获取函数的地址是十分简单的：只需要使用函数名，而不在其后添加尾括号。既，如果 `think()` 是一个函数，那么 `think` 就是函数的地址，将函数作为参数传递，只需要传递函数名。

```c
process(think);	  // passes address of think() to process()
thought(think()); // passes return value of think() to thought()
```



#### 声明指向函数的指针

为了声明指向数据类型的指针，声明必须指定这个指针指向的数据类型。相似地有，指向函数的指针必须指定它指向的函数类型。这意味着，声明需要确定函数的 <span style='color:red'>返回类型</span> 以及函数的 <span style='color:red'>参数列表</span>。比如：

```c
double pam(int); // prototype
```

声明适用于上面的函数指针:

```c
double (*pf)(int);
```

声明需要括号包围 `*pf` 来提供合适的操作符优先级。括号相较于 `*` 具有更高的优先级，因此 `*pf(int)` 表示 `pf()` 为一个返回指针类型的函数，而 `(*pf)(int)` 表示 `pf` 是一个指向函数的指针:

```c
double (*pf)(int); // pf points to a functio that return double
double *pf(int);   // pf() is a function that returns a pointer-to-double
```

在合适地声明了 `pf` 之后，可以为它指定匹配函数的地址:

```c
double pam(int);
double (*pf)(int);
pf = pam; // pf now points to the pam() function
```

注意到 `pam()` 的参数以及返回值都需要匹配 `pf`。编译器拒绝不匹配情况出现：

```c
double ned(double);
int ted(int);
double (*pf)(int);

pf = ned; // invalid -- mismatch signature
pf = ted; // invalid -- mismatch return type
```

现在，我们要将函数指针作为参数传递给另一个函数，那么这样的函数原型可以是:

```c
void estimate(int lines, double (*pf)(int));
```

这样的声明，表明第二个参数是一个指向具有 `int` 参数 `double` 返回类型的函数指针。为了使用 `estimate()` 函数:

```c
double pam(int);
estimate(50, pam);
```



#### 使用函数指针调用函数

在我们声明的时候，`(*pf)` 与函数名扮演着相同的角色，因此我们在使用时，只需要:

```c
double pam(int);
double (*pf)(int);
pf = pam;
double x = pam(4);
double y = (*pf)(5);
```

实际上，`C++` 允许向使用函数一样使用指向函数的指针：

```c
double y = pf(5);
```

使用第一种情况虽然比较丑陋，但是它提醒着我们在使用函数指针。