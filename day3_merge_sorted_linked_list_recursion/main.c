// list1 = [ 1, 2, 4 ], list2 = [ 1, 3, 4 ]
// list1 = [], list2 = []
// list1 = [], list2 = [0]
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "merge.h"

int main()
{
	int a[] = {1, 2, 4, 65};
	int b[] = {1, 5, 55, 56};
	Node *first = createLinkedList(a, 4);
	Node *second = createLinkedList(b, 4);
	printLinkedList(first);
	printLinkedList(second);
	Node *myPointer = mergeInit(first, second);
	printLinkedList(myPointer);
}