## `switch` 语句与 `if else` 语句

`switch` 语句与 `if-else` 语句都可以从一些备选项中实现程序选择。`if-else` 语句是两者之中具有更高功能性的选择。它可以处理范围，比如下面的例子:

```c
if (age > 17 && age < 35)
index = 0;
else if (age >= 35 && age < 50)
index = 1;
else if (age >= 50 && age < 65)
index = 2;
else
index = 3;
```

而 `switch` 语句设计初衷，不是用来处理范围。每一个 `switch`、`case` 标号必须是单独的值。这个值也必须是整数(包括字符)，因此 `switch` 语句不能处理浮点数测试。而且 `case` 标签值必须是一个常量。

通常情况下，`switch` 语句在代码尺寸与执行速度上，相较于 `if-else` 更加高效。

**Tip**

如果你可以在 `if-else` 与 `switch` 语句中选择，如果具有三个或三个以上的选择，最好选择 `switch` 语句