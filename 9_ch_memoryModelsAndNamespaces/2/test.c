#include "stdio.h"

int main()
{
    int x = 4;
    printf("x = %d, &x = %p\r\n", x, &x);

    {
        int x = 5;
        printf("In block x = %d, &x = %p\r\n", x, &x);
    }

    printf("Out block x = %d, &x = %p\r\n", x, &x);

    return 0;
}