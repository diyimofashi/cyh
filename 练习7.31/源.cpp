#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//1. ��ӡ100~200֮�������


//int main(void)
//{
//	int b = 0;
//	for (int i = 101; i < 200; i += 2)
//	{
//		int a = 0;
//		for (int j = 3; j < i; j++)
//		{
//			
//			while (i % j == 0)
//			{
//
//				a++;
//				break;
//			}
//			if (a != 0)
//			{
//				break;
//			}
//
//
//		}
//		if (a == 0)
//		{
//			b++;
//			printf("%d ", i);
//		
//
//		}
//
//
//	}
//
//	printf("\n%d", b);
//
//
//
//	return 0;
//}

//2.����˷��ھ���

//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//
//	
//
//
//
//	return 0;
////}
//
////3. �ж�1000��---2000��֮�������
//int main(void)
//{
//	int i = 1000;
//	int j = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			j++;
//
//
//		}
//		if (i % 400 == 0)
//		{
//			j++;
//			printf("%d ", i);
//		}
//
//
//
//	}
//	printf("\n");
//	printf("%d", j);
//
//
////	return 0;
////}
//
//
//int main(void)
//{
//	////1. �����������α�����ֵ��������ֵ�����ݽ��н�����
//	//int a = 12312;
//	//int b = 34556;
//	// printf("%d %d\n", a, b);
//	//int c = 0;
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("%d %d\n", a, b);
//	////2. ����������ʱ���������������������ݣ������⣩
//	//int a = 12908;
//	//int b = 978497;
//	//printf("%d %d\n", a, b);
//
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d\n", a, b);
//	return 0;
//}

//
////3.��10 �����������ֵ��
//int main(void)
//{
//	int a[10] = { 123,123,456,789,45,3543,3545,432,45664,124731 };
//	int b = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (b < a[i])
//			b = a[i];
//		
//	}
//	printf("%d\n", b);
//
//
//	return 0;
////}
////4.�����������Ӵ�С�����
//int main(void)
//{
//	int a = 1234;
//	int b = 97492;
//	int c = 8942;
//	if (a < c)
//	{
//		a = c ^ a;
//		c = c ^ a;
//		a = c ^ a;
//
//	}
//	if (b < c)
//	{
//		b = b ^ c;
//		c = b ^ c;
//		b = b ^ c;
//
//	}
//	if (a < b)
//	{
//		a = b ^ a;
//		b = b ^ a;
//		a = b ^ a;
//
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//
//}

//5.�������������Լ����

//
//int main(void)
//{
//	int a = 16;
//	int b = 12;
//	int i = (a > b ? b : a);
//	while (i)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//		i--;
//	}
//	printf("%d��%d�����Լ���ǣ�%d��\n", a, b, i);
//
//	return 0;
////}
//int gongyueshu(int a, int b)
//{
//	int i = (a > b ? b : a);
//	int j = (a > b ? a : b);
//	int n = 1;
//	while (n)
//	{
//		n = j % i;
//		if (n != 0)
//		{
//			j = i;
//			i = n;
//
//		}
//		
//
//	}
//	return i;
//}
//int main(void)
//{
//	int a = 44;
//	int b = 22;
//	int i = gongyueshu(a,b);
//	printf("%d��%d�����Լ���ǣ�%d��\n", a, b, i);
//
//	return 0;
//}
//// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i / 10)
//			j++;
//		if (9 == i % 10)
//			j++;
//
//
//	}
//	printf("%d\n", j);
//
//	return 0;
//}