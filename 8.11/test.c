#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//
//int main(void)
//{
//	int a[] = { 1,2,3,4,5,6,7,8,1,2,3,4,6,5 };
//	int b = 0;
//	int c = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] >> 1 & 1 == 1)
//			b ^= a[i];
//		else
//			c ^= a[i];
//	}
//	printf("%d %d", b, c);
//
//	return 0;
////}
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//
//
//int main(void)
//{	
//	int q = 20;
//	int qs = q;
//	int pz = q;
//	int zzz = 2*q - 1;
//	for(pz =q;pz > 1; pz = pz / 2 +pz%2)
//	{
//		q = pz / 2;
//		qs += q;
//
//
//
//	}
//	printf("%d %d\n",qs,zzz);
//	return 0;
//}