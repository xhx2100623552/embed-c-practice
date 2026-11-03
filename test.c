#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("a = %d\n", a);
    printf("p指向的值 = %d\n", *p);
    printf("a的地址 = %p\n", &a);
    printf("p里面存的地址 = %p\n", p);

    int buf[4] = {1,2,3,4};
    for(int i = 0; i < 4; i++)
    {
        printf("buf[%d]=%d\n", i, buf[i]);
    }

    return 0;
}

