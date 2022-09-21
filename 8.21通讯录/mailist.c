#include "mailist.h"

//添加
void add(malist* ma)
{
	assert(ma);
	printf("请输入姓名：\n");
	scanf("%s", ma->pepls[ma->num].name);
	printf("请输入年龄：\n");
	scanf("%d", &(ma->pepls[ma->num].age));
	printf("请输入性别：\n");
	scanf("%s", ma->pepls[ma->num].sex);
	printf("请输入电话号：\n");
	scanf("%s", ma->pepls[ma->num].phone);
	printf("请输入地址：\n");
	scanf("%s", ma->pepls[ma->num].add);
	ma->num = ma->num + 1;
	fflush(stdin);

}
//显示
void show(const malist* ma)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("通讯录为空！\n");
		return;

	}
	printf("位置\t姓名\t年龄\t性别\t电话\t\t\t地址\n");
	for (int i = 0; i < ma->num; i++)
	{
		printf("%d\t",i+1);
		printf("%s\t",ma->pepls[i].name);
		printf("%d\t", ma->pepls[i].age);
		printf("%s\t", ma->pepls[i].sex);
		printf("%s\t\t\t", ma->pepls[i].phone);
		printf("%s\n", ma->pepls[i].add);




	}



}
//删除
void del(malist* ma, int i)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("通讯录为空！\n");
		return ;

	}
	if (i <= 0)
	{
		printf("删除错误，无效地址！\n");
		return ;

	}
	i--;
	while (i < ma->num)
	{
		
		ma->pepls[i] = ma->pepls[i + 1];
		i++;
	}
	ma->num = ma->num - 1;


}

//查找
int seek(const malist* ma)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("通讯录为空！\n");
		return 0;

	}
	printf("请输入需要查找的项目：\n");
	printf("a.姓名\tb.性别\nc.电话\td.地址\n");
	printf("q.退出\n");

	char ch = 0;
	fflush(stdin);
	scanf(" %c",&ch);
	//printf("%c",arr);
	fflush(stdin);
	int i = 0;
	switch (ch)
	{
	case 'a': 
		i = chazhao(ma, seekname);
		break;
	case 'b':
		i = chazhao(ma, seeksex);
		break;
	case 'c':
		i = chazhao(ma, seekphone);
		break;
	case 'd': 
		i = chazhao(ma, seekadd);
		break;
	case 'q':
		printf("退出查找。\n");
		break;
	default:
		printf("非法选项。\n");
		break;
	}



	return i;

}//跳转查找内容
int chazhao(const malist* ma, int (*pseek)(const malist* ma, const char* arr))
{
	assert(ma);

	printf("请输入内容：\n");
	char content[ADDNUM] = { 0 };
	scanf("%s", content);
	fflush(stdin);
	int i = pseek(ma, content);
	return i;
}





//查找姓名
int seekname(const malist* ma,const char* arr)
{
	assert(ma);
	for (int i = 0; i < ma->num; i++)
	{
		if (!strcmp(arr , ma->pepls[i].name))
		{
			return i+1;
		}
	}
	return 0;
}
//查找性别
int seeksex(const malist* ma, const char* arr)
{
	assert(ma);
	for (int i = 0; i < ma->num; i++)
	{
		if (!strcmp(arr, ma->pepls[i].sex))
		{
			return i + 1;
		}
	}
	return 0;

}
//查找电话
int seekphone(const malist* ma, const char* arr)
{
	assert(ma);
	for (int i = 0; i < ma->num; i++)
	{
		if (!strcmp(arr, ma->pepls[i].phone))
		{
			return i + 1;
		}
	}
	return 0;
}
//查找地址
int seekadd(const malist* ma, const char* arr)
{
	assert(ma);
	for (int i = 0; i < ma->num; i++)
	{
		if (!strcmp(arr, ma->pepls[i].add))
		{
			return i + 1;
		}
	}
	return 0;
}
//修改指定联系人信息
void modify(malist* ma, int i)
{
	assert(ma);
	if (i <= 0)
	{
		printf("非法输入！\n");
		return;

	}
	printf("请输入需要修改的项目：\n");
	printf("a.姓名\tb.性别\nc.电话\td.地址\n");
	printf("e.年龄\tq.退出\n");

	char ch = 0;
	fflush(stdin);
	scanf(" %c", &ch);

	switch (ch)
	{
	case 'a':
		printf("请输入：\n");

		scanf("%s", ma->pepls[i-1].name);
		break;
	case 'b':
		printf("请输入：\n");

		scanf("%s", ma->pepls[i-1].sex);
		break;
	case 'c':
		printf("请输入：\n");

		scanf("%s", ma->pepls[i-1].phone);
		break;
	case 'd':
		printf("请输入：\n");

		scanf("%s", ma->pepls[i-1].add);
		break;
	case 'e':
		printf("请输入：\n");

		scanf("%d", &(ma->pepls[i-1].age));
		break;
	case 'q':
		printf("退出查找。\n");
		break;
	default:
		printf("非法选项。\n");
		break;
	}
}

int namesort(const void* a, const void* b)
{

	return strcmp(((pepl*)a)->name , ((pepl*)b)->name);




}