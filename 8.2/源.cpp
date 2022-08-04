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
//
//
//#include <stdio.h>
//#include <ctype.h>
//int main() {
//	char ch;
//	printf("请输入字符:\n");
//	while (ch = getchar())
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c", ch + 32);
//		}
//
//	}
//
//	return 0;
//}
//
//
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。


//
//#include <stdio.h>
//
//void chengfa(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%3d * %3d = %3d  ", j, i, i * j);
//
//
//		}
//		printf("\n");
//
//
//	}
//
//
//
//
//}
//
//int main(void)
//
//
//{
//	int a = 0;
//	printf("请输入数字：");
//	scanf("%d", &a);
//
//	chengfa(a);
//
//
//
//
//
//
//
//	return 0;
//}
//
////2.使用函数实现两个数的交换。
//#include <stdio.h>
//
//void jiaohuan(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//
//
//
//}
//int main(void)
//
//{
//	int a = 23;
//	int b = 2345;
//	printf(" %d  %d \n", a, b);
//
//	jiaohuan(&a, &b);
//
//	printf(" %d  %d \n", a, b);
//
//	return 0;
//}


//
//////3.实现一个函数判断year是不是润年。
//#include <stdio.h>
//void panduan(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//		printf("%d是闰年。\n", y);
//	else if (y % 400 == 0)
//		printf("%d是闰年。\n", y);
//	else
//		printf("%d不是闰年。\n", y);
//
//
//
//
//}
//int main(void)
//{
//	int year = 1900;
//	panduan(year);
//
//
//
//	return 0;
//}
//
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
////要求：自己设计函数的参数，返回值。
//
//#include <stdio.h>
//void init(int* arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		*(arr + i) = i;
//		printf("%d ", arr[i]);
//
//	
//	
//
//	}
//	printf("\n");
//
//}
//void empty(int* arr, int a)
//{
//	int i = 0;
//	while (i < a)
//	{
//		*(arr + i) = 0;
//		printf("%d ", arr[i]);
//		i++;
//
//	}
//	printf("\n");
//
//}
//
//void reverse(int arr[], int a)
//{
//	int l = 0;
//	int r = a - 1;
//	int j = 0;
//	while (l < r)
//	{
//
//		j = arr[l];
//		arr[l] = arr[r];
//
//		arr[r] = j;
//		l++;
//		r--;
//	}
//
//
//
//}
//int main(void)
//
//{
//	int arr[32] = { 0 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	empty(arr, a);
//	init(arr,a);
//
//	reverse(arr, a);
//	for(int i = 0; i <a;i++)
//		printf("%d ", arr[i]);
//
//	printf("\n");
//
//	return 0;
//}
////5.实现一个函数，判断一个数是不是素数。
//
//#include <stdio.h>
//#include <math.h>
//void panduan(int a)
//{
//	int i = 0;
//	int j = 0;
//	j = sqrt(a);
//	int count = 0;
//	for (i = 3; i <= j; i += 2)
//	{
//		if (a % 3 == 0)
//		{
//			count++;
//			break;
//
//
//		}
//
//
//
//	}
//
//	if (0 == count)
//		printf("%d是素数。",a);
//	else
//		printf("%d不是素数。",a);
//}
//
//int main(void)
//{
//	int a = 0;
//	printf("请输入要判断的数：\n");
//	scanf("%d", &a);
//	panduan(a);
//
//}