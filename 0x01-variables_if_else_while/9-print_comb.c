#include<stdio.h>
int main(void)
{
    int a;
    for (a = 48; a < 58; a++)
    {
        putchar(a);
        if (a == 57)
            continue;
        putchar(',');
        putchar(' ');
    }
    putchar(10);
    return (0);
}
