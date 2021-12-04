#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"


Node *head;
void removeTheItem1(Node* presentNode,Node* prevNode,int value){
	
	if(presentNode->next == NULL && presentNode->value != value){
		return;
	}else if(presentNode->next == NULL && presentNode->value == value){
		prevNode->next = NULL;
		free(presentNode);
		return;
	}
	else{
		if(presentNode->value == value && prevNode == NULL){
			Node* temp = presentNode->next;
			free(presentNode);
			head = temp;
			removeTheItem1(temp,NULL,value);
		}else{
			if(presentNode->value == value){
				prevNode->next = presentNode->next;
				free(presentNode);
				removeTheItem1(prevNode->next,prevNode,value);
			}else{
				removeTheItem1(presentNode->next,presentNode,value);
			}
		}
	}
}

Node* removeTheItem(Node* presentNode,int value){
	struct myTuple* array = createArrayUsingList(presentNode);
	head = createLinkedList(array->array,array->length);
	removeTheItem1(head,NULL,value);
	return head;
}
