#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//
//1.����Ļ���������ͼ����
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
/*int main(void)
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
*/

//
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//
//void panduan(int i)
//{
//	int a = i % 10;
//	int b = (i / 10) % 10;
//	int c = (i / 10 / 10) % 10;
//
//	if (i == a * a * a + b * b * b + c * c * c)
//		printf("ˮ�ɻ�����%d��\n", i);
//
//
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		panduan(i);
//
//
//	}
//
//
//
//	return 0;
//}
//
//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//

//
//int main(void)
//{
//	int j = 5;
//	int i = 2;
//	int Sn = 0;
//
//	int a = 0;
//	while (j > 0)
//	{
//		a = a + i;
//		i = i * 10;
//		Sn = Sn + a;
//		j--;
//
//	}
//
//
//
//	printf("%d", Sn);
//
//}