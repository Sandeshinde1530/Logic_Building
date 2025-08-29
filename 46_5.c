#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void DisplayLargest(PNODE head)
{
    int iDigit = 0;
    int iLarge = 0;
    int iNo = 0;

    while (head != NULL)
    {
        iLarge = 0;
        iNo = head->data;
        if (iNo == 0)
        {
            printf("0\t");
        }
        else
        {
            while (iNo > 0)
            {
                iDigit = iNo % 10;
                if (iDigit > iLarge)
                {
                    iLarge = iDigit;
                }
                iNo /= 10;
            }
            printf("%d\t", iLarge);
        }
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 419);
    InsertFirst(&first, 532);
    InsertFirst(&first, 250);
    InsertFirst(&first, 11);

    Display(first);

    DisplayLargest(first);

    return 0;
}