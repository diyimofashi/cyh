#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

char* mystrncat(char* dest, const char* source, size_t num)
{
	char* start = dest;
	while (num && *dest != '\0')
	{
		dest++;
	}
	while (num-- && (*dest = *source) != '\0')
	{
		dest++;
		source++;


	}




	return start;
}



int main(void)
{
	char ch1[30] = "1234567890";
	char ch2[20] = "abcdefghig";
	char ch3[20] = "123abc";

	mystrncat(ch1, ch3, 15);
	printf("%s\n",ch1);

	return 0;
}