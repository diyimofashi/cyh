#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//printf����ֵ����\n ������\0;
//
//int main(void)
//{
//	int i = 0;
//	i = printf("hello world!\n");
//	printf("%d", i);
//
//
//	return 0;
//}

//
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}
//
////
////
//int  count_one_bits(unsigned int value)
//{
//	int a = 32;
//	int ret = 0;
//	while (a--)
//	{
//		
//		if (value & 1)
//		{
//			ret++;
//			
//		
//
//		}
//		value = value >> 1;
//
//	}
//
//	return ret;
//
//}
//int main(void)
//{
//	int i = -1;
//	int a = count_one_bits(i);
//
//	printf("%d", a);
//
//	return 0;
//}
////
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//
//int main(void)
//{
//	int a = 127;
//	int i = 30;
//	int j = 31;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//
//
//	}
//	printf("\n");
//	for (j = 31; j > 0 ;j -= 2)
//	{
//		printf("%d ", (a >> j) & 1;);
//
//
//
//	}
//	printf("\n");
//
//
//	return 0;
//}



//
//3. ���һ��������ÿһλ��
//
//int main(void)
//{
//	int a = 123;
//	int i = 31;
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (a >> i) & 1);
//
//
//	}
//
//
//	return 0;
//}
////////
//////4.���ʵ�֣�
//////����int��32λ������m��n�Ķ����Ʊ���У�
//////�ж��ٸ�λ(bit)��ͬ��
//////�������� :
//////1999 2299
//////������� : 7
//////
////////
//int main(void)
//{
//	int a = 1999;
//	int b = 2299;
//	int i = 0;
//	int count = 0;
//	int c = a ^ b;
//	//printf("%d", c);
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i) &1)
//			count++;
//	}
//	printf("%d",count);
//
//
//	return 0;
//}