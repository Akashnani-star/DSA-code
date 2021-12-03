#include <stdlib.h>
#include "linked_list.h"
#include "addition_linked_list.h"

Node *additionList;
Node *rootOfAdditionList;

void addition(const Node *presentForFirst, const Node *presentForSecond, int carry)
{
    if (presentForFirst == NULL && presentForSecond == NULL)
    {
        additionList->value = carry;
        additionList->next = NULL;
    }
    else
    {
        int sum;
        if (presentForSecond == NULL)
        {
            sum = (presentForFirst->value) + carry;
        }
        else if (presentForFirst == NULL)
        {
            sum = (presentForSecond->value) + carry;
        }
        else
        {
            sum = (presentForFirst->value) + (presentForSecond->value) + carry;
        }

        int lastDigit = sum % 10;
        int firstDigit = sum / 10;
        additionList->value = lastDigit;

        if ((presentForFirst == NULL ? 1 : (presentForFirst->next == NULL ? 1 : 0)) &&
            (presentForSecond == NULL ? 1 : (presentForSecond->next == NULL ? 1 : 0)) &&
            firstDigit == 0)
        {
            additionList->next = NULL;
            return;
        }
        additionList->next = (Node *)malloc(sizeof(Node));
        additionList = additionList->next;
        addition(presentForFirst == NULL ? NULL : presentForFirst->next, presentForSecond == NULL ? NULL : presentForSecond->next, firstDigit);
    }
}

Node *initAddition(const Node *presentForFirst, const Node *presentForSecond, int carry)
{
    additionList = malloc(sizeof(Node));
    rootOfAdditionList = additionList;
    addition(presentForFirst, presentForSecond, carry);
    return rootOfAdditionList;
}
