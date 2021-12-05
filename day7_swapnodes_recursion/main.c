#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include"swapNodes.h"

int main(){
	int a[6] = {1,2,4,3,1,4};
	Node* list = createLinkedList(a,6);
	printLinkedList(swapNodes(list));
}