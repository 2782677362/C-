#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 15
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct Peoinfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

Peoinfo data[MAX];

 typedef struct Contact {
	 Peoinfo data[MAX];
	int count;
}Contact;
 
 Contact con;

void menu();//打印菜单

void InitContact(Contact* p);//初始化通讯录

void AddContact(Contact* p);//添加联系人

void ShowContact(const Contact* p);//显示通讯录中的联系人信息

void DelContact(Contact* p);//删除联系人

int SearchContact(const Contact* p);//查找联系人

void PrSearContact(const Contact* p);//查找并打印联系人信息

void ModifyContact(Contact* p);//修改联系人信息

void SortContact(Contact* p);//排序(按名字排序或按年龄排序)
