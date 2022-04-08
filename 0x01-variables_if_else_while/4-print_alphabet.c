#include<stdio.h>
int main()
{
    int a = 97;
    
    while (a < 123)
    {
        if (a == 101 || a == 113)
        {
            a++;
            continue;
        }

        putchar(a);
        a++;
    }
    putchar(10);
    return 0;
}
