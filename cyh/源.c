

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
	printf("**********                           **********\n");
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
	char qipan[ROW][COL];
	//初始化空格
	chushihua(qipan, ROW, COL);
	//打印棋盘
	dayin(qipan, ROW, COL);
	char winner = 'Q';
	while (1)
	{
		//玩家输入
		player(qipan);
		dayin(qipan, ROW, COL);
		winner = is_winner(qipan);
		if (winner != 'Q')
			break;
		//电脑输入
		computer(qipan);
		dayin(qipan, ROW, COL);
		winner = is_winner(qipan);
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