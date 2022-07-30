

#include "game.h"

void chushihua(char qipan[ROW][COL], int row, int col)  //��ʼ��
{
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++ )
			qipan[i][j] = ' ';
	}
}

void dayin(char qipan[ROW][COL], int row, int col)  //��ӡ����
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", qipan[i][j]);
			if (j < col - 1)
				printf("%c", '|');
		}
		printf("\n");

		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if(j < col-1)
					printf("%c", '|');
			
			}
		printf("\n");
		}
	}
}



void player(char qipan[ROW][COL])  //�������
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("������룺\n");
		printf("���������꣺\n");
		scanf("%d %d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)
		{
			if (qipan[a - 1][b - 1] == ' ')
			{
				qipan[a - 1][b - 1] = '*';
				break;
			}
			else
				printf("���걻ռ��,���������룡\n");

		}
		else
			printf("����Ƿ�,���������룡\n");
	}
}


void computer(char qipan[ROW][COL])  //��������
{
	int a = 0;
	int b = 0;
	printf("�������룺\n");
	while (1)
	{
		a = rand() % ROW;
		b = rand() % COL;
		if (qipan[a][b] == ' ')
		{
			qipan[a][b] = '#';
			break;
		}
	}
}

char is_winner(char qipan[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		if (qipan[i][1] != ' ' && qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] )
			return qipan[i][1];

	}
	for (int j = 0; j < COL; j++)
	{
		if (qipan[1][j] != ' ' && qipan[0][j] == qipan[1][j] && qipan[1][j] == qipan[2][j] )
			return qipan[1][j];
	}
	if (qipan[1][1] != ' ' && qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2])
		return qipan[1][1];
	if (qipan[1][1] != ' ' && qipan[0][2] == qipan[1][1] && qipan[1][1] == qipan[2][0])
		return qipan[1][1];
	for (int a = 0; a < ROW; a++)
	{
		for (int b = 0; b < COL; b++)
		{
			if (qipan[a][b] == ' ')
				return 'Q';
		}
	}
	return 'q';
}