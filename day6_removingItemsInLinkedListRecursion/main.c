#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include"removeItem.h"

void main(){
	
	int arr[] = {6,6,3,4,5,6};
	Node* list = createLinkedList(arr,6);
	printf("Original list : \n");
	printLinkedList(list);
	printf("New list after removing elements in list : \n");
	printLinkedList(removeTheItem(list,6));
	printf("Original list : \n");
	printLinkedList(list);
}
