#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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
//	printf("��ڼ���쳲���������\n");
//	scanf("%d", &n);
//	n = feibo(n);
//
//	printf("%d", n);
//
//	return 0;
//}

//
////2.��дһ������ʵ��n ^ k��ʹ�õݹ�ʵ��
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
//	printf("ʵ��N��K�η���\n");
//	printf("����N��K��\n");
//	scanf("%d %d", &n, &k);
//	num = pingfang(n, k);
//
//	printf("%f", num);
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//		printf("����һ���Ǹ�������\n");
//		scanf("%d", &n);
//		if (n > 0)
//		{
//			sum = DigitSum(n);
//			break;
//		}
//		printf("����ˣ������䣺\n");
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//
//4. ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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


//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//	printf("��׳ˣ�\n����һ������\n");
//	int n = 0;
//	scanf("%d", &n);
//	int a = jiecheng(n);
//
//	printf("%d", a);
//
////	return 0;
////}
//////7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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