#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>
void my_stract(char* ch1, const char* ch)
{
	assert(ch != NULL);

	while (*ch1 != '\0')
		ch1++;
	while (*ch1++ = *ch++);



}

int main(void)
{
	char ch1[120] = {0};
	char ch2[30] = "dsad";
	char ch3[30] = " sadqwed ";
	char ch4[30] = "dwqeqw ";
	char ch5[30] = "dwqw.";
	my_stract(ch1, ch2);
	printf("%s\n%s\n", ch1, ch2);
	my_stract(ch1, ch3);
	printf("%s\n%s\n", ch1, ch3);

	my_stract(ch1, ch4);
	printf("%s\n%s\n", ch1, ch4);

	my_stract(ch1, ch5);
	printf("%s\n%s\n", ch1, ch5);



	return 0;
}