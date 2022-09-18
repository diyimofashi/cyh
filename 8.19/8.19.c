#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//
//        putchar(tolower(ch));
//        while (getchar() != '\n');
//    }
// 
//
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int n = 0;
//
//
//    scanf("%d", &n);
//    double max = 0, min = 100, pingjun = 0;
//    double* fen = (double*)malloc(sizeof(double) * n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lf", fen+i);
//
//        max = max > *(fen + i) ? max : *(fen + i);
//        min = min < *(fen + i) ? min : *(fen + i);
//        pingjun += *(fen + i);
//
//    }
//    printf("%.2lf %.2lf %.2lf", max, min, pingjun / n);
//    free(fen);
//    fen = NULL;
//
//
//    return 0;
//}
//#include <stdio.h>


//int main(void)
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF && (m <= n * h))
//    {
//
//
//        if (m % h)
//            printf("%d", n - (m / n + 1));
//        else
//            printf("%d", n - (m / n));
//
//
//
//    }
//
//
//
//
//    return 0;
//}
#include <stdio.h>

int main(void)
{
    double f = 0;
    scanf("%lf", &f);
    double c = 5.0 / 9 * (f - 32);
    printf("%.3lf", c);






    return 0;
}