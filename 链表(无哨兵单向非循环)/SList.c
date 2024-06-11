#define  _CRT_SECURE_NO_WARNINGS
#include "SList.h"


SLNode* CreatNode(int x)//创建节点并存入值
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
	newnode->next = NULL;
	return newnode;
}


void SLTPrint(SLNode* phead)//打印
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}


void SLTPushBack(SLNode** pphead, int x)//尾插
{
	SLNode* newnode = CreatNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}


void SLTPushFront(SLNode** pphead, int x)//头插
{
	SLNode* newnode = CreatNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}


void SLTPopBack(SLNode** pphead)//尾删
{
	assert(*pphead);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		/*SLNode* prev = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;*/

		SLNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}


void SLTPopFront(SLNode** pphead)//头删
{
	assert(*pphead);

	SLNode* tmp = *pphead;
	*pphead = (*pphead)->next;
	free(tmp);
}