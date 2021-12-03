#include "linked_list.h"
#include "reOrder.h"

int main(){
	int a[] = {1,2,3,4,5};
	Node* list = createLinkedList(a,5);
	reOrder(list);
	printLinkedList(list);
}