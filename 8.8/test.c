#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//1.��д������
////unsigned int reverse_bit(unsigned int value);
////��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
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
//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
//
//(a+b)>>1;
////3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
