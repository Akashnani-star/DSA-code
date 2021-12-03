#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

Node* list[] = {NULL,NULL};
Node** getTail(Node* head){
	Node* ptr = head;
	Node* prev;
	while(ptr->next != NULL){
		prev = ptr;
		ptr = ptr->next;
	}
	list[0]  = prev;
	list[1] = ptr;
	return list;
}

Node *first;
void reOrder(Node* head){
	if(first == NULL){
		first = head;
	}
	Node** tails = getTail(head);
	if(first->next == tails[1] || first == tails[1]){
		return;
	}
	tails[0]->next = NULL;
	tails[1]->next = first->next;
	first->next = tails[1];
	first = tails[1]->next;
	reOrder(head);
}
