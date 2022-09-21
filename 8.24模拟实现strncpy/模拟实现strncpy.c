#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

char* my_strncpy(char* dest, const char* source, size_t num)
{
	//printf("%d\n", dest - source);
	if (num == 0)
		return dest;
	int a = strlen(source);
	if (num > a)
	{
		for (int i = 0; i <= a; i++)
		{
			if ((source - dest) < 0)
			{
				dest[a - i ] = source[a - i ];
			}
			else
			{
				dest[i] = source[i];
			}
		}
		for (int i = a+1; i < num; i++)
		{
			dest[i] = "\0";


		}




	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			if ((source - dest) < 0)
			{
				dest[num - i - 1] = source[num - i - 1];
			}
			else
			{
				dest[i] = source[i];



			}


		}
	}
	


	return dest;
}

int main(void)
{
	char arr1[20] = "1234567890";


	my_strncpy(&arr1[2], &arr1[0], 4);

	printf("%s\n", arr1);
	char arr2[20] = "1234567890";
	my_strncpy(&arr2[0], &arr2[2], 4);

	printf("%s\n", arr2);
	char arr3[20] = "1234567890123456789";

	my_strncpy(arr2, arr1, 12);


	printf("%s\n", arr2);



	return 0;
}