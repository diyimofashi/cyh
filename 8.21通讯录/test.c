#include "mailist.h"




void blesort(void* arr, int num, int size, int (*p)(const void* a, const void* b))
{

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (p(((char*)arr) + j * size, ((char*)arr) + (j + 1) * size) > 0)
			{
				for (int k = 0; k < size; k++)
				{
					char ch = ((char*)arr)[k + j * size];

					((char*)arr)[k + j * size] = ((char*)arr)[k + size + j * size];
					((char*)arr)[k + size + j * size] = ch;




				}


			}



		}



	}



}
void test1(malist * ch)
{
	//添加
	add(ch);
	add(ch);
	add(ch);

	//显示
	show(ch);
	//printf("%d", (int)sizeof(ch->pepls));
	//printf("%d", (int)sizeof(ch->pepls[0]));

	qsort(&(ch->pepls[0]), ch->num, (int)sizeof(ch->pepls[0]), namesort);

	//删除
	//del(ch, 1);
	//del(ch,0);
	//查找
	//printf("%d",seek(ch));
	//modify(ch, 2);
	
	show(ch);
}





int main(void)
{
	//创建通讯录
	malist mlist;
	mlist.num = 0;
//	printf("%d", sizeof(mlist.pepls[0]));

	test1(&mlist);

	return 0;
}

