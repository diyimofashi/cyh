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

void chushihua(char qipan[ROW][COL], int row, int col);   //��ʼ������
void dayin(char qipan[ROW][COL], int row, int col); //��ӡ����
void player(char qipan[ROW][COL]);  //�������
void computer(char qipan[ROW][COL]);  //��������
char is_winner(char qipan[ROW][COL]);