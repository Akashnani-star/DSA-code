#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "merge.h"

void merge(Node *first, Node *second)
{
	if (first == NULL && second == NULL)
	{
		thirdListPointer->next = NULL;
		return;
	}
	else if (first == NULL && second != NULL)
	{
		thirdListPointer->value = second->value;
		if (second->next != NULL)
		{
			thirdListPointer->next = (Node *)malloc(sizeof(Node));
			thirdListPointer = thirdListPointer->next;
		}
		merge(first, second->next);
	}
	else if (first != NULL && second == NULL)
	{
		thirdListPointer->value = first->value;
		if (first->next != NULL)
		{
			thirdListPointer->next = (Node *)malloc(sizeof(Node));
			thirdListPointer = thirdListPointer->next;
		}
		merge(first->next, second);
	}
	else
	{
		if ((first->value) > (second->value))
		{
			thirdListPointer->value = second->value;
			thirdListPointer->next = (Node *)malloc(sizeof(Node));
			thirdListPointer = thirdListPointer->next;
			merge(first, second->next);
		}
		else
		{
			thirdListPointer->value = first->value;
			thirdListPointer->next = (Node *)malloc(sizeof(Node));
			thirdListPointer = thirdListPointer->next;
			merge(first->next, second);
		}
	}
}

Node *mergeInit(Node *first, Node *second)
{
	if (first == NULL && second == NULL)
		return NULL;
	rootForThirdList = (Node *)malloc(sizeof(Node));
	thirdListPointer = rootForThirdList;
	merge(first, second);
	return rootForThirdList;
}
