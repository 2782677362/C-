#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SListType;

typedef struct SListNode {
	SListType val;
	struct SListNode* next;
}SLNode;

SLNode* CreatNode(SListType x);//�����ڵ㲢����ֵ
void SLTPrin(SLNode* phead);//��ӡ
void SLTPushBack(SLNode** pphead, SListType x);//β��
void SLTPushFront(SLNode** pphead, SListType x);//ͷ��
void SLTPopBack(SLNode** pphead);//βɾ
void SLTPopFront(SLNode** pphead);//ͷɾ
