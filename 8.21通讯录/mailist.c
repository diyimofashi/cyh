#include "mailist.h"

//���
void add(malist* ma)
{
	assert(ma);
	printf("������������\n");
	scanf("%s", ma->pepls[ma->num].name);
	printf("���������䣺\n");
	scanf("%d", &(ma->pepls[ma->num].age));
	printf("�������Ա�\n");
	scanf("%s", ma->pepls[ma->num].sex);
	printf("������绰�ţ�\n");
	scanf("%s", ma->pepls[ma->num].phone);
	printf("�������ַ��\n");
	scanf("%s", ma->pepls[ma->num].add);
	ma->num = ma->num + 1;
	fflush(stdin);

}
//��ʾ
void show(const malist* ma)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;

	}
	printf("λ��\t����\t����\t�Ա�\t�绰\t\t\t��ַ\n");
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
//ɾ��
void del(malist* ma, int i)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return ;

	}
	if (i <= 0)
	{
		printf("ɾ��������Ч��ַ��\n");
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

//����
int seek(const malist* ma)
{
	assert(ma);
	if (ma->num == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return 0;

	}
	printf("��������Ҫ���ҵ���Ŀ��\n");
	printf("a.����\tb.�Ա�\nc.�绰\td.��ַ\n");
	printf("q.�˳�\n");

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
		printf("�˳����ҡ�\n");
		break;
	default:
		printf("�Ƿ�ѡ�\n");
		break;
	}



	return i;

}//��ת��������
int chazhao(const malist* ma, int (*pseek)(const malist* ma, const char* arr))
{
	assert(ma);

	printf("���������ݣ�\n");
	char content[ADDNUM] = { 0 };
	scanf("%s", content);
	fflush(stdin);
	int i = pseek(ma, content);
	return i;
}





//��������
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
//�����Ա�
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
//���ҵ绰
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
//���ҵ�ַ
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
//�޸�ָ����ϵ����Ϣ
void modify(malist* ma, int i)
{
	assert(ma);
	if (i <= 0)
	{
		printf("�Ƿ����룡\n");
		return;

	}
	printf("��������Ҫ�޸ĵ���Ŀ��\n");
	printf("a.����\tb.�Ա�\nc.�绰\td.��ַ\n");
	printf("e.����\tq.�˳�\n");

	char ch = 0;
	fflush(stdin);
	scanf(" %c", &ch);

	switch (ch)
	{
	case 'a':
		printf("�����룺\n");

		scanf("%s", ma->pepls[i-1].name);
		break;
	case 'b':
		printf("�����룺\n");

		scanf("%s", ma->pepls[i-1].sex);
		break;
	case 'c':
		printf("�����룺\n");

		scanf("%s", ma->pepls[i-1].phone);
		break;
	case 'd':
		printf("�����룺\n");

		scanf("%s", ma->pepls[i-1].add);
		break;
	case 'e':
		printf("�����룺\n");

		scanf("%d", &(ma->pepls[i-1].age));
		break;
	case 'q':
		printf("�˳����ҡ�\n");
		break;
	default:
		printf("�Ƿ�ѡ�\n");
		break;
	}
}

int namesort(const void* a, const void* b)
{

	return strcmp(((pepl*)a)->name , ((pepl*)b)->name);




}