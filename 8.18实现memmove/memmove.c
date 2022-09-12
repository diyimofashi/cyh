#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

void* my_memmove(void* destination, const void* source, size_t num)
{
	assert(destination && source);
	num = num - 1;
		if (destination < source)
		{
			
			for (int i = 0; i < num; i++)
			{
				*((char*)destination + i) = *((char*)source + i);
			}
		}
		else
		{
			for (int i = num; i >=0; i--)
			{
				*((char*)destination + i) = *((char*)source +  i);
			}
		}
	return destination;
}
int main(void)
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	my_memmove(&a[0], &a[7], 12);
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
	int* b = memmove(&a[4], &a[1], 12);
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf(" %d", *(b + i));
	}
	printf("\n");
	return 0;
}