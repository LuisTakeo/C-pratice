
#include <unistd.h>
#include <stdio.h>

int     main(void)
{
    int     a;
    int     b;
    char    c;
    int     *ptr;
    char    *ptr2;

    ptr = &a;
    printf("%p\n", ptr);
    ptr = &b;
    printf("%p\n", ptr);
    ptr2 = &c;
    printf("%p\n", ptr2);
    *ptr = 2;
    printf("%d", *ptr);
    return (0);
}