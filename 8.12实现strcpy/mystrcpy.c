#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void my_strcpy(char* x, const char* y)
{
	assert(y != NULL);
	//int i = 0;
	//for (i = 0; *(y+i) != '\0'; i++)
	//{
	//	*(x + i) = y[i];
	//}
	//x[i] = *(y + i);
	while (*x++ = *y++);



}


int main(void)
{
	char a[] = "asdqweas12344566zs adqw";
	char b[30];
	my_strcpy(b, a);


	printf("%s\n%s\n",a,b);



	return 0;
}

