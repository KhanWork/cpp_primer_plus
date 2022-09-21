**`C++` 布尔输出**

```cpp
cout << "The expression x < 3 has the value ";
cout << (x < 3) << endl;
cout << "The expression x > 3 has the value ";
cout << (x > 3) << endl;
cout.setf(ios_base::boolalpha);
cout << "The expression x < 3 has the value ";
cout << (x < 3) << endl;
cout << "The expression x > 3 has the value ";
cout << (x > 3) << endl;
```

**指针的++/--**

```cpp
double arr[5] = {2.0, 3.1, 4.2, 5.3, 6.4};
double *pt = arr;
```

上面的程序定义了 `pt` 指针指向 `arr[0]` 地址。

```cpp
++pt;
```

运行上面语句之后，`pt` 指针指向 `arr[1]` 地址。

```cpp
double x = *++pt;
```

上面的语句，先增加 `pt` 指针，之后取指针指向的地址，即 `arr[2]`。

```cpp
++*pt;
```

执行上面的语句，会对指针指向的数值自加 `1`。

```cpp
(*pt)++;
```

执行上面的语句，会对指针指向的数值自加 `1`。

```cpp
x = *pt++;
```

执行上面的语句，会首先将 `pt` 指向的数值赋值给 `x`，之后对指针自加。

**`C++` 的语句块**

下面的程序，因为 `y` 定义在单独的语句块中，因此编译下面的程序时会报错:

```cpp
#include <iostream>

int main()
{
        using namespace std;

        int x = 20;
        {
                int y = 100;
                cout << x << endl;
                cout << y << endl;
        }

        cout << x << endl;
        cout << y << endl;

        return 0;
}
```

报错:

```sh
test.cpp:15:10: error: ‘y’ was not declared in this scope
  cout << y << endl;
```

下面的程序，在语句块中重新定义了 `x`，在语句块结束之后，变量变为原本的值:

```cpp
#include <iostream>

int main()
{
        using namespace std;

        int x = 20;
        {
                cout << x << endl;
                int x = 100;
                cout << x << endl;
        }

        cout << x << endl;

        return 0;
}
```

运行结果:

```sh
[orz]:$ ./test
20
100
20
```

**测试字串的顺序或相等**

可以使用 `C` 风格的 `strcmp()` 来测试 `C` 风格的字串的顺序与相等与否。如果 `str1` 与 `str2` 一致，下面的表达为真:

```c
strcmp(str1, str2) == 0;
```

如果 `str1` 与 `str2` 不一致，那么下面的表达为真:

```c
strcmp(str1, str2) != 0;
```

```c
strcmp(str1, str2)
```

如果 `str1` 第一个不相等的字符出现在 `str2` 的前面，那么下面表达为真:

```c
strcmp(str1, str2) < 0
```

相反，下面的表达为真:

```c
strcmp(str1, str2) > 0
```

**基于范围的 `for` 循环**

`C++11` 添加了一个新形式的循环，称为基于范围的循环。它在某个元素、某个容器类的一定范围内实现循环任务，比如一个向量或数组。下面是一个例子:

```cpp
double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
for(double x: prices)
    std::cout << x << std::endl;
```

在这个例子中，`x` 以 `prices` 数组的第一个元素进行初始化，在展示了第一个元素之后，循环会轮询呈现数组中剩余的所有元素。

如果想要修改数组的值，需要下面的语句:

```cpp
for(double &x : prices)
    x = x*0.80;
```

`&` 符号表示 `x` 作为一个引用变量，这个概念我们将在第八章讨论。

**`cin` 一个缺点**

使用 `cin` 作为输入读取 `char` 类型的值时，就像读取其他基础的类，`cin` 跳过了空格以及新行符。

对于更加负载的情况，`cin` 的输入是有 `buffer` 的，这意味着，你键入的字符只有在你输入回车键之后才会送给程序。
