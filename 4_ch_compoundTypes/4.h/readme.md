使用 `delete` 释放 `new` 分配的内存:

```cpp
int *ps = new int;
//...
delete ps;
```

不要释放已经释放过的内存，这样做的结果是不能确定的，而且你不要使用 `delete` 释放通过变量地址赋值的指针:

```cpp
int *ps = new int;  //ok
delete ps;          //ok
delete ps;          //not ok now

int jugs = 5;
int *pi = &jugs;    //ok
delete pi;          //not allowed, memoty not allocated by new
```

`delete` 只能用来释放使用 `new` 分配的内存，当然使用 `delete` 释放一个空指针也是合法的。

```cpp
int *ps = new int;  // allocate memory
int *pd = ps;       // set second pointer to same block
delete pd;          // delete with second pointer
```