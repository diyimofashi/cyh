#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define NAMENUM 30
#define SEXNUM 10
#define ADDNUM 30
#define PHONENUM 20
#define MAX 1000
#include <stdio.h>
#include <assert.h>




//个人信息
typedef struct people {
	char name[NAMENUM];
	char sex[SEXNUM];
	char add[ADDNUM];
	char phone[PHONENUM];
	int age;
	
}pepl;

//通讯录
typedef struct mailist {
	pepl pepls[MAX];
	int num;

}malist;
//添加
void add( malist * ma);
//显示
void show(const malist * ma);
//删除
void del(malist* ma, int i);
