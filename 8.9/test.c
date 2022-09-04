#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//////所有偶数位于数组的后半部分。
////
//int main(void)
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	int a = 0;
//	int j = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			a = arr[i];
//
//			for (j = i; j < 9; j++)
//			{
//				arr[j] = arr[j + 1];
//
//
//
//			}
//			arr[9] = a;
//
//		}
//	}
//	for (int i = 0; i < 10; i++)
//		printf("%d  ", arr[i]);
//
//
//	return 0;
//}
//////}2.
//////杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//
#define N 5
int main(voif)
{
	int yangbiao[N][N] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{17,18,19,20,21},
		{23,24,25,26,27} };
	int a = 16;
	int i = 0;
	int j = N - 1;
	while (1)
		if (a < yangbiao[i][j] && j >= 0)
		{
			j--;


		}
		else if (a > yangbiao[i][j] && i < N)
		{

			i++;


		}
		else if (a == yangbiao[i][j])
		{
			printf("%d的坐标是：%d %d\n", a, i+1, j+1);
			break;

		}
		else
		{
			printf("没有\n");
			break;
		}

	

	return 0;
}