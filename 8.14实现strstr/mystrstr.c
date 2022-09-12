#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* mystrstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int i = 1;
	char* ch2 = str2;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2 && *str1 != *ch2)
		{
			str1++;

			i = 1;
		}
		else if (*str1 != *str2 && *str1 == *ch2)
		{
			str2 = ch2;
			i = 1;
		}
		else
		{
			str1++;
			str2++;
			i++;
		}

	}
	
	if ((i != 0 && 0 == *str2))
	//if(i)
		return str1 - (i-1);
	
	else
		return NULL;
}
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		//abcdef
		//  cdef
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}

	return NULL;
}


int main(void)
{
	char a[] = "bbaaabcaaa";
	char b[] = "abcaaaa";
	char* c = 0;
	c = mystrstr(a, b);
	printf("%s\t%s\t%s\n", a, b, c);
	c = my_strstr(a, b);
	printf("%s\t%s\t%s\n", a, b, c);
	c = strstr(a, b);
	printf("%s\t%s\t%s\n", a, b, c);




	return 0;
}