#define _CRT_SECURE_NO_WARNINGS 1

//
////2.д����������������������в�����Ҫ�����֣�
////�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//		printf("�Ҳ������֡�\n");
//	}
//	else
//	{
//		printf("����%d���±���%d��", b, i);
//	}
//
//
//	return 0;
//}
////3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf("���������루����%d�λ��ᣩ��\n",i);
//		scanf("%s", ch2);
//		if(strcmp(ch1, ch2))
//		{
//			printf("�������\n");
//			i--;
//		}
//		else
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//
//	}
//
//	return 0;
//
////}*/
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//


#include <stdio.h>
#include <ctype.h>
int main() {
	char ch;
	printf("�������ַ�:\n");
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
