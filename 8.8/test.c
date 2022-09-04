#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//1.编写函数：
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//unsigned int reverse_bit(unsigned int value);
//
//
//int main(void)
//{
//	int num = 25;
//	unsigned int a = reverse_bit(num);
//	//printf("%d", num);
//	printf("%u",a);
//
//	return 0;
//}
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int a = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		a += (((value >> i) & 1) << (31 - i));
//
//
//
//
//
//	}
//	return a;
//
//
//2.不使用（a+b）/2这种方式，求两个数的平均值。
//
//(a+b)>>1;
////3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
////
////
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,1,2,3,5,6,7,8,9,10 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		
//		a ^= arr[i];
//
//
//
//
//
//	}
//
//	printf("%d",a);
//	return 0;
//}
//
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//student a am i
//i ma a tneduts
//i am a student
//
#include <string.h>
void fanzhuan(char *ch, int l, int r)
{
	char a = 0;
	while (l <= r)
	{
		a = ch[l];
		ch[l] = ch[r];
		ch[r] = a;
		l++;
		r--;


	}


}
void xuanzhuan(char* ch, int n)
{
	int left = 0;
	int right = 0;
	char a = 0;
	for (int i = 0; i <= n; i++)
	{
		if (ch[i] == ' ' || ch[i] == '\0')
		{
			right = i-1;
			while (left <= right)
			{
				a = ch[left];
				ch[left] = ch[right];
				ch[right] = a;
				left++;
				right--;
			}
			left = i + 1;
		}



	}



}


int main()
{
	char ch[] = {"student a am i"};
	int right = strlen(ch)-1;
	int left = 0;
	fanzhuan(ch, left, right);
	xuanzhuan(ch, right+1);

	printf("%s\n",ch);

	return 0;
}
