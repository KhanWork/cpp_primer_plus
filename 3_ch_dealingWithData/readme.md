**`climits` 符号常量**

| 符号常量     | 含义                    |
| ------------ | ----------------------- |
| `CHAR_BIT`   | char 的比特数           |
| `CHAR_MAX`   | char 最大值             |
| `CHAR_MIN`   | char 最小值             |
| `SCHAR_MAX`  | 带符号 char 最大值      |
| `SCHAR_MIN`  | 带符号 char 最小值      |
| `UCHAR_MAX`  | 无符号 char 最大值      |
| `SHRT_MAX`   | short 最大值            |
| `SHRT_MIN`   | short 最小值            |
| `USHRT_MAX`  | 无符号 short 最大值     |
| `INT_MAX`    | int 最大值              |
| `INT_MIN`    | int 最小值              |
| `UINT_MAX`   | 无符号 int 最大值       |
| `LONG_MAX`   | long 最大值             |
| `LONG_MIN`   | long 最小值             |
| `ULONG_MAX`  | 无符号 long 最大值      |
| `LLONG_MAX`  | long long 最大值        |
| `LLONG_MIN`  | long long 最小值        |
| `ULLONG_MAX` | 无符号 long long 最大值 |



**成员函数 `cout.put()`**

这是我们遇到的第一个 <span style='color:blue'>成员函数</span> 。类定义了如何呈现数据以及如何操作数据。成员函数属于类，描述了操作类数据的方法。针对 `ostream` 类，有 `put()` 成员函数设计来输出字符。



**`C++` 转义字符**

| 字符       | `ASCII` 符号 | `C++` 代码 | `ASCII` 码 |
| ---------- | ------------ | ---------- | ---------- |
| 换行       | `NL`         | `\n`       | `0xA`      |
| 水平制表符 | `HT`         | `\t`       | `0x9`      |
| 垂直制表符 | `VT`         | `\v`       | `0xB`      |
| 退格       | `BS`         | `\b`       | `0x8`      |
| 回车       | `CR`         | `\r`       | `0xD`      |
| 告警       | `BEL`        | `\a`       | `0x7`      |
| 反斜杠     | `\`          | `\\`       | `0x5C`     |
| 问号       | `?`          | `\?`       | `0x3F`     |
| 单引号     | `'`          | `\'`       | `0x27`     |
| 双引号     | `"`          | `\"`       | `0x22`     |



**潜在的数值转换问题**

| 转换类型                                               | 潜在问题                                   |
| ------------------------------------------------------ | ------------------------------------------ |
| 大浮点类型转换为小浮点类型，比如 `double` 转为 `float` | 精度丢失，可能超出目标类型，此时结果不确定 |
| 浮点类型转换为整型类型                                 | 分数丢失，可能超出目标类型，此时结果不确定 |
| 大整型转换为小整型，比如 `long` 转为 `short`           | 可能超目标类型，通常只会保有低位字节       |



**`C++11` 的 `auto`**

`C++11` 允许编译器从初始化类型中自动决定变量类型。为实现这个目的，重新定义了 `C` 关键字 `auto`。在初始化时使用 `auto` 而不是类型名，编译器为这个变量指定变量类型：

```cpp
auto n = 100; // n is int
auto x = 1.5; // x is double
auto y = 1.3e12L // y is long double
```

要注意下面一点：

```cpp
auto x = 0.0; // x is double
double y = 0; // 0 automatically converted to 0.0
auto z = 0; // z is int
```

自动类型在处理复杂类型时实用性很高，比如 `STL: Standard Template Libary` 中的类型，比如在 `C++98` 中有：

```cpp
std::vector<double> scores;
std::vector<double>::iterator pv = score.begin();
```

在 `C++11` 中，可以使用：

```cpp
std::vector<double> scores;
auto pv = scores.begin();
```

