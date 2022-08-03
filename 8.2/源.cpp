#define _CRT_SECURE_NO_WARNINGS 1

//
////2.写代码可以在整型有序数组中查找想要的数字，
////找到了返回下标，找不到返回 - 1.（折半查找）
//
//#include <stdio.h>
//
//int zheban(int arr[],int l, int r, int a)
//{
//	int left = l;
//	int right = r;
//	int c = (r+l) / 2;
//	int i = 0;
//	if (c != left)
//	{
//		if (arr[c] > a)
//		{
//			right = c;
//			int i = zheban(arr, left, right, a);
//
//
//		}
//		else if (arr[c] < a)
//		{
//			left = c;
//			int i = zheban(arr, left, right, a);
//		}
//		else if (arr[c] == a)
//		{
//			i = c;
//			return i;
//
//
//		}
//	}
//	else if (arr[left] == a)
//	{
//		i = left;
//		return i;
//	}
//	else if (arr[right] == a)
//	{
//		i = right;
//		return i;
//	}
//	else
//	{
//		return -1;
//	}
//
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int b = 11;
//
//	int i = zheban(arr, 0, a,b);
//
//
//	if (-1 == i)
//	{
//		printf("找不到数字。\n");
//	}
//	else
//	{
//		printf("数字%d的下标是%d。", b, i);
//	}
//
//
//	return 0;
//}
////3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//
//////
//#include <stdio.h>
//#include <string.h>
////int main(void)/*
////{
//	char ch1[30] = { "asdfasfjkljlasd" };
//	char ch2[30] = { "0"};
//	
//	int i = 3;
//	while (i)
//	{
//		printf("请输入密码（还有%d次机会）：\n",i);
//		scanf("%s", ch2);
//		if(strcmp(ch1, ch2))
//		{
//			printf("密码错误\n");
//			i--;
//		}
//		else
//		{
//			printf("登录成功！");
//			break;
//		}
//
//	}
//
//	return 0;
//
////}*/
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//


#include <stdio.h>
#include <ctype.h>
int main() {
	char ch;
	printf("请输入字符:\n");
	while (ch = getchar())
	{
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c", ch + 32);
		}

	}

	return 0;
}
