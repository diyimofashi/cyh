#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

void* my_memcpy(void* destination, const void* source, size_t num)
{
	for (int i = 0; i < num; i++)
	{

		*((char*)destination + i) = *((char*)source + i);

	}
	return destination;
}
void print(int* a)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);


	}

	printf("\n");
}

int main(void)
{
	int a[10] = { 0 ,1,2,3,4,5};
	int b[10] = { 1,2,3,4,4,5 };
	int c[10] = { 0,1,2,3,4,5 };
	int *d = my_memcpy(a, b, sizeof(a));
	/*printf("%d", sizeof(b));
	printf("%d", sizeof(int));*/

	print(a);
	print(d);
	memcpy(c, b, sizeof(c));
	print(c);

	//printf("%d %d\n", a, b);
	//memcpy(c, b, sizeof(int));
	//printf("%d %d\n", c, b);

	return 0;
}