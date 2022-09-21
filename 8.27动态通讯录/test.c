#include "mailist.h"




void test1(malist * ch)
{
	//添加
	add(ch);
	add(ch);
	add(ch);
	add(ch);
	add(ch);

	//显示
	show(ch);
	//printf("%d", (int)sizeof(ch->pepls));
	//printf("%d", (int)sizeof(ch->pepls[0]));

	qsort(&(ch->pepls[0]), ch->num, (int)sizeof(ch->pepls[0]), namesort);

	//删除
	del(ch, 1);
	//del(ch,0);
	//查找
	printf("%d",seek(ch));
	//modify(ch, 2);
	
	show(ch);
}





int main(void)
{
	//创建通讯录
	malist mlist;
	mlist.vol = 3;
	pepl * ptr = (pepl*)malloc(mlist.vol *sizeof(pepl));
	if (ptr != NULL)
	{
		mlist.pepls = ptr;
		printf("开辟内存成功！\n");


	}
	else
		printf("开辟内存失败！\n");
	
	mlist.num = 0;
	
//	printf("%d", sizeof(mlist.pepls[0]));

	test1(&mlist);


	free(mlist.pepls);
	mlist.pepls = NULL;

	return 0;
}

