#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

typedef	int StackValType;

typedef struct Stack {
	StackValType* a;
	int top;
	int cap;
}ST;



void STInit(ST* ps);//��ʼ��
void STPush(ST* ps, StackValType x);//��ջ
void STPop(ST* ps);//��ջ
int STSize(ST* ps);//��������
StackValType STTop(ST* ps);//����ջ��Ԫ��
bool STEmpty(ST* ps);//�ж�ջ�Ƿ�Ϊ��
void STDestory(ST* ps);//ջ������
void STPrint(ST* ps);//ջ�����ݴ�ӡ

