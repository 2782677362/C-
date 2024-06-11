#define  _CRT_SECURE_NO_WARNINGS

#include "SList.h"

int main()
{
	SLNode* plist = NULL;

	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);

	SLTPrint(plist);

	/*SLTPushFront(&plist, 5);
	SLTPushFront(&plist, 6);

	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPopBack(&plist);

	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPopFront(&plist);*/
	SLTPopFront(&plist);

	SLTPrint(plist);

	return 0;
}