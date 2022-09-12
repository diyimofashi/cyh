#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
int mystrcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;


	}
	if (*str1 == '\0'&& *str2 == '\0')
		return 0;
	return *str1 - *str2;

}

int main(void)
{
	char ch1[] = "asd";
	char ch2[] = "as";
	int a = mystrcmp(ch1, ch2);
	printf("%d\n",a);
	int b = strcmp(ch1, ch2);
	printf("%d\n", b);


	return 0;
}
