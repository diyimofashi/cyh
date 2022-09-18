#include "mailist.h"


void test1(malist * ch)
{
	//添加
	add(ch);
	add(ch);
	add(ch);

	//显示
	show(ch);

	//删除
//	del(ch, 3);

	show(ch);
}





int main(void)
{
	//创建通讯录
	malist mlist;
	mlist.num = 0;
	test1(&mlist);

	return 0;
}

