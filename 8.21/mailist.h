#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define NAMENUM 30
#define SEXNUM 10
#define ADDNUM 30
#define PHONENUM 20
#define MAX 1000
#include <stdio.h>
#include <assert.h>




//������Ϣ
typedef struct people {
	char name[NAMENUM];
	char sex[SEXNUM];
	char add[ADDNUM];
	char phone[PHONENUM];
	int age;
	
}pepl;

//ͨѶ¼
typedef struct mailist {
	pepl pepls[MAX];
	int num;

}malist;
//���
void add( malist * ma);
//��ʾ
void show(const malist * ma);
//ɾ��
void del(malist* ma, int i);
