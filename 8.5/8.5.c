#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//printf返回值包括\n 不包括\0;
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
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
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
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
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
//3. 输出一个整数的每一位。
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
//////4.编程实现：
//////两个int（32位）整数m和n的二进制表达中，
//////有多少个位(bit)不同？
//////输入例子 :
//////1999 2299
//////输出例子 : 7
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