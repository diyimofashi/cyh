

#include "game.h"

int main(void)
{
	srand((unsigned int)time(NULL));


	int number = 0;
	do
	{
		menu();
		printf("请选择：");

		scanf("%d", &number);

		switch (number)
		{
			case 1: game1(); break;
			case 2: game2(); break;
			case 3: game3(); break;
			case 4: game4(); break;

			case 0: 
				printf("已退出！\n"); break;
			default:
				printf("无效输入！\n"); break;
		}

	} while (number);

	return 0;
}



void menu(void)
{
	printf("***********************************************\n");
	printf("***********************************************\n");
	printf("**********        初级游戏合集       **********\n");
	printf("**********        1.猜数字           **********\n");
	printf("**********        2.关机游戏         **********\n");
	printf("**********        3.三子棋           **********\n");
	printf("**********        4.扫雷             **********\n");
	printf("**********                           **********\n");
	printf("**********        0.退出游戏         **********\n");
	printf("***********************************************\n");
}

void game1(void)
{
	int time_1 = rand() % 100 + 1;
	int number_1 = 0;
	
	while (1)
	{
		printf("请猜数字（1-100）：");
		scanf("%d/n", &number_1);
		if (number_1 > time_1)
			printf("数字大了！\n");
		else if (number_1 < time_1)
			printf("数字小了！\n");
		else {
			printf("正确！！！\n");
			break;
		}
	}

}


void game2(void)
{
	char ch_2[20] = { 0 };
	printf("正准备关机，还有倒计时2分钟。\n");
	system("shutdown -s -t 125");
	printf("输入“我是猪”即可取消关机。\n");
again:
	//while(getchar() != '\n');

	scanf("%s", ch_2);
	if (strcmp(ch_2, "我是猪") == 0)
	{
		printf("输入正确，已取消关机。\n");
		system("shutdown -a");
	
	}
	else
	{
		printf("输错了，请重新输入：\n");
		goto again;
	}
}



void game3(void)
{
	//存储数据
	char qipan[ROW_3][COL_3];
	//初始化空格
	chushihua_3(qipan);
	//打印棋盘
	dayin_3(qipan);
	char winner = 'Q';
	while (1)
	{
		//玩家输入
		player_3(qipan);
		dayin_3(qipan);
		winner = is_winner_3(qipan);
		if (winner != 'Q')
			break;
		//电脑输入
		computer_3(qipan);
		dayin_3(qipan);
		winner = is_winner_3(qipan);
		if (winner != 'Q')
			break;
	}

	if (winner == '*')
		printf("!！玩家胜利 ！！\n");
	else if(winner == '#')
		printf("！！电脑胜利 ！！\n");
	else if(winner == 'q')
		printf("！！！ 平局 ！！！\n");
}



void game4(void)
{
	//设置雷区
	char leiqu[ROW_4][COL_4] ={' '};
	//扫描区
	char saomiaoqu[ROW_4][COL_4] = {' '};
	//初始化
	chushihua_4(leiqu,' ');
	chushihua_4(saomiaoqu, '#');
	//布置雷
	bulei_4(leiqu);
	//打印雷区
	dayin_4(leiqu);
	dayin_4(saomiaoqu);


	//排雷
	int pailei = 1;
	while (pailei)
	{
		pailei = pailei_4(leiqu, saomiaoqu);

		dayin_4(saomiaoqu);
		int win = 0;
		for (int i = 1; i <= ROW_4_4; i++)
		{
			for (int j = 1; j <= COL_4_4; j++)
			{
				if (saomiaoqu[i][j] == '#')
					win++;
			}
		}
		if (win == 10)
		{
			printf("********************排雷成功，胜利！！！********************\n");
				break;
		}

	}






}