#include "linked_list.h"
#include "reOrder.h"

int main(){
	int a[] = {1,2,3,4,5,6,7};
	Node* list = createLinkedList(a,7);
	reOrder(list);
	printLinkedList(list);
}