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

}
//��ʾ
void show(malist* ma)
{
	assert(ma);
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



