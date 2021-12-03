#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *createLinkedList(int array[], int length)
{
	if (length == 0)
	{
		return NULL;
	}
	Node *root, *present, *prev;
	root = (Node *)malloc(sizeof(Node));
	root->value = array[0];
	root->next = NULL;
	prev = root;
	for (int i = 1; i < length; i++)
	{
		present = (Node *)malloc(sizeof(Node));
		present->value = array[i];
		present->next = NULL;
		prev->next = present;
		prev = present;
	}
	return root;
}

void printLinkedList(const Node *root)
{
	const Node *present = root;
	printf("[");
	while (present != NULL)
	{
		printf("%d,", present->value);
		present = present->next;
	}
	printf("]");
	printf("\n");
}

int lengthOfLinkedList(const Node *root)
{
	const Node *present = root;
	int length = 0;
	while (present != NULL)
	{
		length++;
		present = present->next;
	}
	return length;
}
