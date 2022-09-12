#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
char* mystrchr(const char* str, int cha)
{
	assert(str);
	while (*str != (char)cha)
	{
		str++;


	}
	if (*str == cha)
		return (char*)str;
	return NULL;

}

int main(void)
{
	char ch[30] = "asdllkqwhhfl";
	char* ch2 = mystrchr(ch, 'l');
	printf("1:%s\t%s\n", ch, ch2);
	char* ch3 = strchr(ch, 'l');
	printf("2:%s\t%s\n", ch, ch3);


	return 0;
}