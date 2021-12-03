#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct node
{
    int value;
    struct node *next;
};

typedef struct node Node;

Node *createLinkedList(int[], int);

void printLinkedList(const Node *);

int lengthOfLinkedList(const Node *);

#endif