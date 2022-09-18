#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    char ch = 0;
    int a = 0;
    while ((ch = getchar()) && ch != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            a++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            a++;

        }
        else
        {
            putchar(ch);


        }


    }

    return 0;
}
