#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
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