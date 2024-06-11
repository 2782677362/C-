#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SListType;

typedef struct SListNode {
	SListType val;
	struct SListNode* next;
}SLNode;

SLNode* CreatNode(SListType x);//创建节点并存入值
void SLTPrin(SLNode* phead);//打印
void SLTPushBack(SLNode** pphead, SListType x);//尾插
void SLTPushFront(SLNode** pphead, SListType x);//头插
void SLTPopBack(SLNode** pphead);//尾删
void SLTPopFront(SLNode** pphead);//头删
