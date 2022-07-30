#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void menu(void);
void game1(void);
void game2(void);
void game3(void);

void chushihua(char qipan[ROW][COL], int row, int col);   //初始化棋盘
void dayin(char qipan[ROW][COL], int row, int col); //打印棋盘
void player(char qipan[ROW][COL]);  //玩家输入
void computer(char qipan[ROW][COL]);  //电脑输入
char is_winner(char qipan[ROW][COL]);