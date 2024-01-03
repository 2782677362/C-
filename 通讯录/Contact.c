#define  _CRT_SECURE_NO_WARNINGS

#include "Contact.h"

//打印菜单
void menu()
{
	printf("*************************************\n");
	printf("*******   1.add      2.del     ******\n");
	printf("*******   3.search   4.modify  ******\n");
	printf("*******   5.show     6.sort    ******\n");
	printf("*******   0.exit               ******\n");
	printf("*************************************\n");
}

//初始化通讯录
void InitContact(struct Contact* p)
{
	assert(p);
	p->count = 0;
	memset(p->data, 0, sizeof(p->data));
}

//添加功能
void AddContact(Contact* p)
{
	assert(p);
	if (p->count == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", &(p->data[p->count].name));
	printf("请输入年龄:>");
	scanf("%d", &(p->data[p->count].age));
	printf("请输入性别:>");
	scanf("%s", &(p->data[p->count].sex));
	printf("请输入电话:>");
	scanf("%s", &(p->data[p->count].tele));
	printf("请输入地址:>");
	scanf("%s", &(p->data[p->count].addr));
	p->count++;
	printf("添加成功\n");
}

//打印功能
void ShowContact(const Contact* p)
{
	assert(p);
	if (p->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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

//查找功能
int SearchContact(const Contact* p)
{
	assert(p);
	if (p->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入姓名:>");
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

//查找并打印功能
void PrSearContact(const Contact* p)
{
	assert(p);
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-15s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		p->data[ret].name,
		p->data[ret].age,
		p->data[ret].sex,
		p->data[ret].tele,
		p->data[ret].addr);
}

//删除功能
void DelContact(Contact* p)
{
	assert(p);
	//查找
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	//删除
	int i = 0;
	for (i = ret; i < p->count - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->count--;
	printf("删除成功\n");
}

//修改功能
void ModifyContact(Contact* p)
{
	assert(p);
	//查找
	int ret = SearchContact(&con);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", &(p->data[ret].name));
	printf("请输入年龄:>");
	scanf("%d", &(p->data[ret].age));
	printf("请输入性别:>");
	scanf("%s", &(p->data[ret].sex));
	printf("请输入电话:>");
	scanf("%s", &(p->data[ret].tele));
	printf("请输入地址:>");
	scanf("%s", &(p->data[ret].addr));
	printf("修改成功\n");
}

//排序功能
void SortContact(Contact* p)
{
	assert(p);
	int i = 0;
	printf("以(1.姓名/2.年龄)排序，请输入(1/2):>");
	scanf("%d",&i);
	if (i != 1 && i != 2)
	{
		printf("输入错误\n");
		return;
	}
	//按姓名排序
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
	//按年龄排序
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
	printf("排序成功\n");
}