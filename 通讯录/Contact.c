#define  _CRT_SECURE_NO_WARNINGS

#include "Contact.h"

//��ӡ�˵�
void menu()
{
	printf("*************************************\n");
	printf("*******   1.add      2.del     ******\n");
	printf("*******   3.search   4.modify  ******\n");
	printf("*******   5.show     6.sort    ******\n");
	printf("*******   0.exit               ******\n");
	printf("*************************************\n");
}

//��ʼ��ͨѶ¼
void InitContact(struct Contact* p)
{
	assert(p);
	p->count = 0;
	memset(p->data, 0, sizeof(p->data));
}

//��ӹ���
void AddContact(Contact* p)
{
	assert(p);
	if (p->count == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", &(p->data[p->count].name));
	printf("����������:>");
	scanf("%d", &(p->data[p->count].age));
	printf("�������Ա�:>");
	scanf("%s", &(p->data[p->count].sex));
	printf("������绰:>");
	scanf("%s", &(p->data[p->count].tele));
	printf("�������ַ:>");
	scanf("%s", &(p->data[p->count].addr));
	p->count++;
	printf("��ӳɹ�\n");
}

//��ӡ����
void ShowContact(const Contact* p)
{
	assert(p);
	if (p->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for ( i = 0; i < p->count; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-30s\n",	
			p->data[i].name,
			p->data[i].age,
			p->data[i].sex,
			p->data[i].tele,
			p->data[i].addr);
	}
}

//���ҹ���
int SearchContact(const Contact* p)
{
	assert(p);
	if (p->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("����������:>");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		if (0==strcmp(p->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

//���Ҳ���ӡ����
void PrSearContact(const Contact* p)
{
	assert(p);
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("ͨѶ¼���޴���\n");
		return;
	}
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-15s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		p->data[ret].name,
		p->data[ret].age,
		p->data[ret].sex,
		p->data[ret].tele,
		p->data[ret].addr);
}

//ɾ������
void DelContact(Contact* p)
{
	assert(p);
	//����
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("ͨѶ¼���޴���\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = ret; i < p->count - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->count--;
	printf("ɾ���ɹ�\n");
}

//�޸Ĺ���
void ModifyContact(Contact* p)
{
	assert(p);
	//����
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("ͨѶ¼���޴���\n");
		return;
	}
	printf("����������:>");
	scanf("%s", &(p->data[ret].name));
	printf("����������:>");
	scanf("%d", &(p->data[ret].age));
	printf("�������Ա�:>");
	scanf("%s", &(p->data[ret].sex));
	printf("������绰:>");
	scanf("%s", &(p->data[ret].tele));
	printf("�������ַ:>");
	scanf("%s", &(p->data[ret].addr));
	printf("�޸ĳɹ�\n");
}

//������
void SortContact(Contact* p)
{
	assert(p);
	int i = 0;
	printf("��(1.����/2.����)����������(1/2):>");
	scanf("%d",&i);
	if (i != 1 && i != 2)
	{
		printf("�������\n");
		return;
	}
	//����������
	else if (i == 1)
	{
		int num = p->count;
		while (num > 1)
		{
			for (int j = 0; j < num - 1; j++)
			{
				if (strcmp(p->data[j].name,p->data[j + 1].name)>0)
				{
					Peoinfo tem = { 0 };
					tem = p->data[j];
					p->data[j] = p->data[j + 1];
					p->data[j + 1] = tem;
				}
			}
			num--;
		}
	}
	//����������
	else
	{
		int num = p->count;
		while(num > 1)
		{
			for (int j = 0; j < num - 1; j++)
			{
				if ((p->data[j].age) > (p->data[j + 1].age))
				{
					Peoinfo tem = { 0 };
					tem = p->data[j];
					p->data[j] = p->data[j + 1];
					p->data[j + 1] = tem;
				}
			}
			num--;
		}
	}
	printf("����ɹ�\n");
}