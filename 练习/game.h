#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define ROW_3 3
#define COL_3 3
#define ROW_4 11
#define COL_4 11
#define ROW_4_4 ROW_4-2
#define COL_4_4 COL_4-2



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void menu(void);
void game1(void);
void game2(void);
void game3(void);
void game4(void);

//game3
void chushihua_3(char qipan[ROW_3][COL_3]);   //初始化棋盘
void dayin_3(char qipan[ROW_3][COL_3]); //打印棋盘
void player_3(char qipan[ROW_3][COL_3]);  //玩家输入
void computer_3(char qipan[ROW_3][COL_3]);  //电脑输入
char is_winner_3(char qipan[ROW_3][COL_3]);//胜利者
//game4
void chushihua_4(char ch[ROW_4][COL_4], char m);//初始化
void bulei_4(char ch[ROW_4][COL_4]);//布置雷
void dayin_4(char ch[ROW_4][COL_4]);//打印
int pailei_4(char ch[ROW_4][COL_4], char arr[ROW_4][COL_4]);//排雷
void saolei_4(char ch[ROW_4][COL_4], char arr[ROW_4][COL_4], int a, int b);//扫雷




