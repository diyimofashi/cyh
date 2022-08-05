#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//1.递归和非递归分别实现求第n个斐波那契数。
//int feibo(int n)
//{
//	
//	if (n <= 2 && n > 0)
//	{
//
//		return 1;
//	}
//		
//	else
//		n = feibo(n - 1) + feibo(n - 2);
//	
//
//
//}
////
//int feibo(int n)
//{
//	int num = 0;
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	
//	if (n <= 2 && n > 0)
//	{
//		return 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		num = a + b;
//		a = b;
//		b = num;
//
//
//
//	}
//	return num;
//}
//
//
//
//
//
//int main(void)
//{
//	int n = 0;
//	printf("求第几个斐波那契数：\n");
//	scanf("%d", &n);
//	n = feibo(n);
//
//	printf("%d", n);
//
//	return 0;
//}

//
////2.编写一个函数实现n ^ k，使用递归实现
//double pingfang(double n, int k)
//{
//	if (k > 1)
//		n = n * pingfang(n, k - 1);
//	else if (k < 0)
//	{
//		n = n / (-k);
//	}
//	else if (0 == k)
//		return 1;
//	else
//		return n;
//	
//
//	return n;
//
//}
//
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	double num = 0;
//	printf("实现N的K次方：\n");
//	printf("输入N和K：\n");
//	scanf("%d %d", &n, &k);
//	num = pingfang(n, k);
//
//	printf("%f", num);
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n > 0)
//	{
//		sum = DigitSum(n / 10) + n % 10;
//
//	}
//	return sum;
//
//}
//
//int main(void)
//{
//	int n = 0;
//	int sum = 0;
//	while (1)
//	{
//
//		printf("输入一个非负整数：\n");
//		scanf("%d", &n);
//		if (n > 0)
//		{
//			sum = DigitSum(n);
//			break;
//		}
//		printf("输错了，请重输：\n");
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//
//4. 编写一个函数 reverse_string(char* string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
//
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (1)
//	{
//		if ( ch[count]!= '\0')
//			count++;
//		else
//			break;
//	}
//	return count;
//
//}
//void reverse_string(char* ch1,int a)
//{
//	int right = a-1;
//	int left = 0;
//	char arr = 0;
//	while (left < right)
//	{
//		arr = ch1[left];
//		ch1[left] = ch1[right];
//		ch1[right] = arr;
//		left++;
//		right--;
//
//	}
//}
//
//int main(void)
//{
//	char ch[30] = {"jio asodifhj woerj l\n"};
//	printf("%s", ch);
//	int a = my_strlen(ch);
//	reverse_string(ch,a);
//
//	printf("%s", ch);
//
//
////}
//5.递归和非递归分别实现strlen
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (1)
//	{
//		if ( ch[count]!= '\0')
//			count++;
//		else
//			break;
//
//
//	}
//	return count;
//
//
//}
//int my_strlen(char* ch)
//{
//	int count = 0;
//
//	if (ch[count] != '\0')
//	{
//		count = 1 + my_strlen(ch + 1);
//
//	}
//
//
//
//	return count;
//
//
//}
//
//int main(void)
//{
//	char ch[30] = { "ccccccccccccccccccccccccc\n" };
//	printf("%s", ch);
//	int a = my_strlen(ch);
//	
//
//	printf("%d", a);
//}


//6.递归和非递归分别实现求n的阶乘
//int jiecheng(int n)
//{
//	if (1 == n)
//		return 1;
//	int a = n * jiecheng(n - 1);
//
//	return a;
////
////}
//int jiecheng(int n)
//{
//	int i = 1;
//	int a = 1;
//	for (i = 1; i <= n ; i++)
//	{
//		a = i * a;
//
//
//	}
//	return a;
//}
//
//
//int main(void)
//{
//	printf("求阶乘：\n输入一个数：\n");
//	int n = 0;
//	scanf("%d", &n);
//	int a = jiecheng(n);
//
//	printf("%d", a);
//
////	return 0;
////}
//////7.递归方式实现打印一个整数的每一位
//void dayin(int n)
//{
//	int a = 0;
//	if ((n / 10)==0)
//	{
//		printf("%d\n", n);
//
//	}
//	else
//	{
//		dayin(n / 10);
//		a = n % 10;
//		printf("%d\n", a);
//
//
//	}
//
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	dayin(n);
//
//
//	return 0;
//}