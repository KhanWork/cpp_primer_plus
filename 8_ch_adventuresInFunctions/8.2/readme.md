## 引用变量

`C++` 语言添加了引用变量。一个引用是一个预先定义的变量的别名，或是它的备选名。比如，如果你令 `twain` 引用 `clemens` 变量，用户可以使用 `twain` 以及 `clemens` 来表示这个变量。引用变量的主要作用是做为函数的参数。如果用户使用引用做为参数，函数操作原始的参数，而不是这个参数的副本。引用提供了指针的备选。

### 创建引用变量

```cpp
int rats;
int & rodents = rats;
```

<span style="color:red">可以使用变量初始化引用，但是不能为其赋值修改它的引用</span>

