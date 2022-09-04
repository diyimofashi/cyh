#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>/*
////1.实现一个函数，可以左旋字符串中的k个字符。
////ABCD左旋一个字符得到BCDA
//////ABCD左旋两个字符得到CDAB*/
//#include <string.h>
//void zuoxuan(char* ch, int left,int right)
//{
//	char c = 0;
//	while (left < right)
//	{
//		c = ch[left];
//		ch[left] = ch[right];
//		ch[right] = c;
//		left++;
//		right--;
//	}
//}
//int main(void)
//{
//	char arr[30] = { "ABCD" };
//	int a = strlen(arr);
//	int k = 0;
//	scanf("%d",&k);
//	k %= a;
//	zuoxuan(arr, 0, k - 1);
//	printf("%s\n", arr);
//
//	zuoxuan(arr, k, a - 1);
//	printf("%s\n", arr);
//
//	zuoxuan(arr, 0, a - 1);
//
//	printf("%s\n", arr);
//
//
////	return 0;
////}2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//

#include <string.h>

void zuoxuan(char* ch, int left, int right)
{
	char c = 0;
	while (left < right)
	{
		c = ch[left];
		ch[left] = ch[right];
		ch[right] = c;
		left++;
		right--;
	}
}
int panduan(char* s1, char* s2)
{
	int n = strlen(s1);
	int i = n;
	while (i--)
	{
		if (!(strcmp(s1, s2)))
			return 1;
		zuoxuan(s1, 1, n-1);
		printf("%s\n", s1);

		zuoxuan(s1, 0, n-1);
		printf("%s\n", s1);
	}
	return 0;



}




int main(void)
{
	char s1[10] = { "abcd" };
	char s2[10] = { "ABCD" };
	int a = panduan(s1, s2);
	if (a == 1)
		printf("是\n");
	else
		printf("不是\n");

	return 0;
}