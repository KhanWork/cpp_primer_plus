什么是 Bit Fields in Structures

```cpp
struct torgle_register{
    unsigned int SN : 4;
    unsigned int : 4;
    bool goodIn : 1;
    bool goodTorgle : 1;
}
```