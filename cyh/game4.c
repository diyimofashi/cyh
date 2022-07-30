#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void chushihua_4(char ch[ROW_4][COL_4], char m)//初始化
{
	for (int i = 0; i < ROW_4; i++)
	{
		for (int j = 0; j < COL_4; j++)
		{
			ch[i][j] = m;


		}

	}





}

void bulei_4(char ch[ROW_4][COL_4])//布置雷
{
	int i = 0;
	int a = 0;
	int b = 0;

	while(i <= ROW_4_4)
	{
		a = rand() % ROW_4_4 + 1;
		b = rand() % COL_4_4 + 1;

		if (a > 0 && a < ROW_4_4 + 1 && b > 0 && b < COL_4_4 + 1&&ch[a][b]!='*')
		{
			ch[a][b] = '*';
			i++;
		}
	}




}





void dayin_4(char ch[ROW_4][COL_4])//打印
{
	printf("**********************************扫雷*************************************\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= ROW_4_4; i++)
		printf("%d   ", i);
	printf("\n");
	printf("  _____________________________________\n");

	for (i = 1; i <= ROW_4_4; i++)
	{
		printf("%d |", i);
		for (j = 1; j <= COL_4_4; j++)
		{

			printf(" %c |", ch[i][j]);



		}
		printf("\n");

		printf("  |___|___|___|___|___|___|___|___|___|\n");



	}

	printf("**********************************扫雷*************************************\n");

}


int pailei_4(char ch[ROW_4][COL_4], char arr[ROW_4][COL_4])//排雷
{
	int a = 0;
	int b = 0;
	printf("请输入需要排查的坐标：\n");
	scanf("%d %d", &a, &b);
	if (a > 0 && a < ROW_4_4 + 1 && b>0 && b < COL_4_4 + 1 )
	{
		if (ch[a][b] == '*')
		{
			printf("***************踩雷了，游戏结束！！！***************\n");
			arr[a][b] = '*';
			return 0;

		}
		else
		{
			if (arr[a][b] != '#')
			{
				printf("***************重复输入，请重新输入：***************\n");


				return 1;
			}
			else
			{

				saolei_4(ch, arr, a, b);
				return 1;


			}


		}
	}
	else
	{
		printf("***************坐标越界，请重新输入：***************\n");
		return 1;
	}

}


void saolei_4(char ch[ROW_4][COL_4], char arr[ROW_4][COL_4], int a, int b)//扫雷
{
		char count = '0';
		for (int i = a - 1; i <= a + 1; i++)
		{
			for (int j = b - 1; j <= b + 1; j++)
			{

				if (ch[i][j] == '*')
					count++;
			}

		}
		if (arr[a][b] == '#' && a > 0 && a <= ROW_4_4 && b>0 && b <= COL_4_4)
		{
			if (count == '0')
			{
				arr[a][b] = ' ';
				for (int i = a - 1; i <= a + 1; i++)
				{
					for (int j = b - 1; j <= b + 1; j++)
					{
						saolei_4(ch, arr, i, j);
					}
				}
			}
			else
			{
				arr[a][b] = count;
			}

		}



}

