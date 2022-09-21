#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void print(int* a)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);




	}
	printf("\n");
}



int intSort(const void* a, const void* b)
{
	return *((int*)b) - *((int*)a);



}
void blesort(void* arr, int num, int size, int (*p)(const void * a ,const void* b))
{

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i-1; j++)
		{
			if (p(((char*)arr) + j * size, ((char*)arr) + (j + 1) * size) > 0)
			{
				for (int k = 0; k < size; k++)
				{
					char ch = ((char*)arr)[k+j*size];
					((char*)arr)[k + j * size] = ((char*)arr)[k + size + j * size];
					((char*)arr)[k + size + j * size] = ch;




				}


			}



		}



	}



}
void maopao(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int ch = arr[j];
				arr[j] = arr[j+ 1];
				arr[j + 1] = ch;


			}




		}





	}




}


int main(void)
{
	int arr[] = { 9,8,3,7,6,5,4,2,1,0 };

	print(arr);
//	maopao(arr, 10);
//	qsort(arr,10,4,intSort);
	blesort(arr, 10, 4, intSort);
	print(arr);


	return 0;
}