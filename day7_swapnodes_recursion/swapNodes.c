#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

Node* head;

void swapNodes1(Node* presentNode, Node* prevNode){
	if(prevNode == NULL){
		head = presentNode->next;
		Node* nextNode = presentNode->next;
		presentNode->next = nextNode->next;
		nextNode->next = presentNode;
		swapNodes1(presentNode->next,presentNode);
	}else{
		if((presentNode == NULL && prevNode->next == NULL) || presentNode->next == NULL){
			return;
		}else{
			Node* nextNode = presentNode->next;
			presentNode->next = nextNode->next;
			nextNode->next = presentNode;
			prevNode->next = nextNode;
			swapNodes1(presentNode->next,presentNode);
		}
	}
}

Node* swapNodes(Node* list){
	if(list == NULL){
		return NULL;
	}else if(list->next == NULL){
		return list;
	}
	swapNodes1(list,NULL);
	return head;
}