#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define NAMENUM 30
#define SEXNUM 10
#define ADDNUM 30
#define PHONENUM 20
#define MAX 1000
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>




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
void del(malist* ma,int i);
//查找
int seek(const malist* ma);
//跳转查找内容
int chazhao(const malist* ma, int (*pseek)(const malist* ma, const char* arr));

//查找姓名
int seekname(const malist* ma,const char* arr);
//查找性别
int seeksex(const malist* ma, const char* arr);


//查找电话
int seekphone(const malist* ma, const char* arr);


//查找地址
int seekadd(const malist* ma, const char* arr);
//修改指定联系人信息
void modify(malist* ma, int i);
//以名字排序所有联系人
int namesort(const void* a, const void* b);
