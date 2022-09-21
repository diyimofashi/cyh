#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int  i = 1000000 % (int)(314 * a * b * b);
        if (i != 0)
        {
            printf("%d", (int)(10000 / (3.14 * a * b * b)+1));




        }
        else
            printf("%d", (int)(10000 / (3.14 * a * b * b)));

    }
    return 0;
}