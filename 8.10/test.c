#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>/*
////1.ʵ��һ�����������������ַ����е�k���ַ���
////ABCD����һ���ַ��õ�BCDA
//////ABCD���������ַ��õ�CDAB*/
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
////}2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
		printf("��\n");
	else
		printf("����\n");

	return 0;
}