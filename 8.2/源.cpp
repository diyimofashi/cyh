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
//
//
//#include <stdio.h>
//#include <ctype.h>
//int main() {
//	char ch;
//	printf("�������ַ�:\n");
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
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���


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
//	printf("���������֣�");
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
////2.ʹ�ú���ʵ���������Ľ�����
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
//////3.ʵ��һ�������ж�year�ǲ������ꡣ
//#include <stdio.h>
//void panduan(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//		printf("%d�����ꡣ\n", y);
//	else if (y % 400 == 0)
//		printf("%d�����ꡣ\n", y);
//	else
//		printf("%d�������ꡣ\n", y);
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
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
////5.ʵ��һ���������ж�һ�����ǲ���������
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
//		printf("%d��������",a);
//	else
//		printf("%d����������",a);
//}
//
//int main(void)
//{
//	int a = 0;
//	printf("������Ҫ�жϵ�����\n");
//	scanf("%d", &a);
//	panduan(a);
//
//}