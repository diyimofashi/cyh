#include "mailist.h"




void test1(malist * ch)
{
	//���
	add(ch);
	add(ch);
	add(ch);
	add(ch);
	add(ch);

	//��ʾ
	show(ch);
	//printf("%d", (int)sizeof(ch->pepls));
	//printf("%d", (int)sizeof(ch->pepls[0]));

	qsort(&(ch->pepls[0]), ch->num, (int)sizeof(ch->pepls[0]), namesort);

	//ɾ��
	del(ch, 1);
	//del(ch,0);
	//����
	printf("%d",seek(ch));
	//modify(ch, 2);
	
	show(ch);
}





int main(void)
{
	//����ͨѶ¼
	malist mlist;
	mlist.vol = 3;
	pepl * ptr = (pepl*)malloc(mlist.vol *sizeof(pepl));
	if (ptr != NULL)
	{
		mlist.pepls = ptr;
		printf("�����ڴ�ɹ���\n");


	}
	else
		printf("�����ڴ�ʧ�ܣ�\n");
	
	mlist.num = 0;
	
//	printf("%d", sizeof(mlist.pepls[0]));

	test1(&mlist);


	free(mlist.pepls);
	mlist.pepls = NULL;

	return 0;
}

