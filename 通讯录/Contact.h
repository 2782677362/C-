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

void menu();

void InitContact(Contact* p);

void AddContact(Contact* p);

void ShowContact(const Contact* p);

void DelContact(Contact* p);

int SearchContact(const Contact* p);

void PrSearContact(const Contact* p);

void ModifyContact(Contact* p);

void SortContact(Contact* p);
