

#include "game.h"

int main(void)
{
	srand((unsigned int)time(NULL));


	int number = 0;
	do
	{
		menu();
		printf("��ѡ��");

		scanf("%d", &number);

		switch (number)
		{
			case 1: game1(); break;
			case 2: game2(); break;
			case 3: game3(); break;
			case 0: 
				printf("���˳���\n"); break;
			default:
				printf("��Ч���룡\n"); break;
		}

	} while (number);

	return 0;
}



void menu(void)
{
	printf("***********************************************\n");
	printf("***********************************************\n");
	printf("**********        ������Ϸ�ϼ�       **********\n");
	printf("**********        1.������           **********\n");
	printf("**********        2.�ػ���Ϸ         **********\n");
	printf("**********        3.������           **********\n");
	printf("**********                           **********\n");
	printf("**********                           **********\n");
	printf("**********        0.�˳���Ϸ         **********\n");
	printf("***********************************************\n");
}

void game1(void)
{
	int time_1 = rand() % 100 + 1;
	int number_1 = 0;
	
	while (1)
	{
		printf("������֣�1-100����");
		scanf("%d/n", &number_1);
		if (number_1 > time_1)
			printf("���ִ��ˣ�\n");
		else if (number_1 < time_1)
			printf("����С�ˣ�\n");
		else {
			printf("��ȷ������\n");
			break;
		}
	}

}


void game2(void)
{
	char ch_2[20] = { 0 };
	printf("��׼���ػ������е���ʱ2���ӡ�\n");
	system("shutdown -s -t 125");
	printf("���롰����������ȡ���ػ���\n");
again:
	//while(getchar() != '\n');

	scanf("%s", ch_2);
	if (strcmp(ch_2, "������") == 0)
	{
		printf("������ȷ����ȡ���ػ���\n");
		system("shutdown -a");
	
	}
	else
	{
		printf("����ˣ����������룺\n");
		goto again;
	}
}



void game3(void)
{
	//�洢����
	char qipan[ROW][COL];
	//��ʼ���ո�
	chushihua(qipan, ROW, COL);
	//��ӡ����
	dayin(qipan, ROW, COL);
	char winner = 'Q';
	while (1)
	{
		//�������
		player(qipan);
		dayin(qipan, ROW, COL);
		winner = is_winner(qipan);
		if (winner != 'Q')
			break;
		//��������
		computer(qipan);
		dayin(qipan, ROW, COL);
		winner = is_winner(qipan);
		if (winner != 'Q')
			break;
	}

	if (winner == '*')
		printf("!�����ʤ�� ����\n");
	else if(winner == '#')
		printf("��������ʤ�� ����\n");
	else if(winner == 'q')
		printf("������ ƽ�� ������\n");
}