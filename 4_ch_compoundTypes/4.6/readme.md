在这个例子中，我们没有办法输入预期的第二个输入内容。问题在于当 `cin` 读取年份时，将输出时键入的回车换行键保留到了输入队列中。之后 `cin.getline()` 读取它作为输入，得到空行并将这个空白输入作为空字串给到地址数组。可以在读取地址之前丢弃新行来修复这个问题。这可以通过多种方式实现，包括使用一个新的 `get()`; 或者可以串联调用。

方法一:
```cpp
    cin >> year;
    cin.get();
```

方法二:
```cpp
    (cin >> year).get();
```