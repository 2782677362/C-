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

void menu();//��ӡ�˵�

void InitContact(Contact* p);//��ʼ��ͨѶ¼

void AddContact(Contact* p);//�����ϵ��

void ShowContact(const Contact* p);//��ʾͨѶ¼�е���ϵ����Ϣ

void DelContact(Contact* p);//ɾ����ϵ��

int SearchContact(const Contact* p);//������ϵ��

void PrSearContact(const Contact* p);//���Ҳ���ӡ��ϵ����Ϣ

void ModifyContact(Contact* p);//�޸���ϵ����Ϣ

void SortContact(Contact* p);//����(�������������������)
