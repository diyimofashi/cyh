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

}
//显示
void show(malist* ma)
{
	assert(ma);
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
void del(malist* ma, unsigned int i)
{
	assert(ma);
	i--;
	while (i < ma->num)
	{
		ma->pepls[i] = ma->pepls[i + 1];
		i++;
	}
	ma->num = ma->num - 1;


}



