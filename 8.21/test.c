#include "mailist.h"


void test1(malist * ch)
{
	//���
	add(ch);
	add(ch);
	add(ch);

	//��ʾ
	show(ch);

	//ɾ��
//	del(ch, 3);

	show(ch);
}





int main(void)
{
	//����ͨѶ¼
	malist mlist;
	mlist.num = 0;
	test1(&mlist);

	return 0;
}

