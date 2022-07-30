

#include "game.h"

void chushihua_3(char qipan[ROW_3][COL_3])  //初始化
{
	
	for (int i = 0; i < ROW_3; i++)
	{
		for (int j = 0; j < COL_3; j++ )
			qipan[i][j] = ' ';
	}
}

void dayin_3(char qipan[ROW_3][COL_3])  //打印棋盘
{
	for (int i = 0; i < ROW_3; i++)
	{
		for (int j = 0; j < COL_3; j++)
		{
			printf(" %c ", qipan[i][j]);
			if (j < COL_3 - 1)
				printf("%c", '|');
		}
		printf("\n");

		if (i < ROW_3 - 1)
		{
			for (int j = 0; j < COL_3; j++)
			{
				printf("---");
				if(j < COL_3-1)
					printf("%c", '|');
			
			}
		printf("\n");
		}
	}
}



void player_3(char qipan[ROW_3][COL_3])  //玩家输入
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("玩家输入：\n");
		printf("请输入坐标：\n");
		scanf("%d %d", &a, &b);
		if (a >= 1 && a <= ROW_3 && b >= 1 && b <= COL_3)
		{
			if (qipan[a - 1][b - 1] == ' ')
			{
				qipan[a - 1][b - 1] = '*';
				break;
			}
			else
				printf("坐标被占用,请重新输入！\n");

		}
		else
			printf("坐标非法,请重新输入！\n");
	}
}


void computer_3(char qipan[ROW_3][COL_3])  //电脑输入
{
	int a = 0;
	int b = 0;
	printf("电脑输入：\n");
	while (1)
	{
		a = rand() % ROW_3;
		b = rand() % COL_3;
		if (qipan[a][b] == ' ')
		{
			qipan[a][b] = '#';
			break;
		}
	}
}

char is_winner_3(char qipan[ROW_3][COL_3])
{
	for (int i = 0; i < ROW_3; i++)
	{
		if (qipan[i][1] != ' ' && qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] )
			return qipan[i][1];

	}
	for (int j = 0; j < COL_3; j++)
	{
		if (qipan[1][j] != ' ' && qipan[0][j] == qipan[1][j] && qipan[1][j] == qipan[2][j] )
			return qipan[1][j];
	}
	if (qipan[1][1] != ' ' && qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2])
		return qipan[1][1];
	if (qipan[1][1] != ' ' && qipan[0][2] == qipan[1][1] && qipan[1][1] == qipan[2][0])
		return qipan[1][1];
	for (int a = 0; a < ROW_3; a++)
	{
		for (int b = 0; b < COL_3; b++)
		{
			if (qipan[a][b] == ' ')
				return 'Q';
		}
	}
	return 'q';
}