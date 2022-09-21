#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int mystrncmp(const char* str1, const char* str2, size_t num)
{
	
	if (!num)
		return 0;
	while (*str1 && *str2 && num-- && (*str1 - *str2) == 0)
	{
		str1++;
		str2++;
	}
	
	
	return *str1 - *str2;
	
}

int main(void)
{
	char arr1[20] = "12";
	char arr2[20] = "34";
	printf("%d\n",mystrncmp(arr1, arr2, 20));




	return 0;
}