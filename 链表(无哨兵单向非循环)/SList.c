#define  _CRT_SECURE_NO_WARNINGS
#include "SList.h"


SLNode* CreatNode(int x)//�����ڵ㲢����ֵ
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


void SLTPrint(SLNode* phead)//��ӡ
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}


void SLTPushBack(SLNode** pphead, int x)//β��
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


void SLTPushFront(SLNode** pphead, int x)//ͷ��
{
	SLNode* newnode = CreatNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}


void SLTPopBack(SLNode** pphead)//βɾ
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


void SLTPopFront(SLNode** pphead)//ͷɾ
{
	assert(*pphead);

	SLNode* tmp = *pphead;
	*pphead = (*pphead)->next;
	free(tmp);
}