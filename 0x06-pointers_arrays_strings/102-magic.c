#include <stdio.h>

int main(void)
{
    int a[5];
    int *p;

    a[2] = 1024;
    p = &a[2] - 2;

    *(p + 2) = 98;  /* Added line */

    printf("a[2] = %d\n", a[2]);

    return (0);
}

