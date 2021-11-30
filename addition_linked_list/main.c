#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "addition_linked_list.h"
int main()
{
    int a[] = {9, 9, 9, 9, 9, 9, 9};
    int b[] = {9, 9, 9, 9};
    Node *first = createLinkedList(a, 7);
    Node *second = createLinkedList(b, 4);
    Node *mylist = initAddition(first, second, 0);
    printLinkedList(mylist);
}
