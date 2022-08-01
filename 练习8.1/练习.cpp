#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//
//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
int main(void)
{
	int i = 0;
	int j = 0;
	int n = 18;
	for (i = 0; i < 13; i++)
	{
		if (i < 7)
		{
			for (j = 6 - i; j > 0; j--)
			{
				printf(" ");

			}
			for (j = 1; j <=i+i+1 ; j++)
				printf("*");
			printf("\n");
			

		}
		else
		{
			for (j = 0; j < i-6; j++)
			{
				printf(" ");

			}
			for (j = 0; j < n-i; j++)
				printf("*");
			printf("\n");
			n--;
		}

	}





	return 0;
}


