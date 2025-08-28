#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn= NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
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
    while(head!= NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void reverse(PNODE head)
{
    int iNo = 0;
    int iDigit = 0;
    int iRev = 0;
    
    while(head != NULL)
    {
        iRev = 0;
        iNo = head->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev= iRev * 10 + iDigit;
            iNo /= 10;
        }
        head->data = iRev;
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 41);
    InsertFirst(&first , 32);
    InsertFirst(&first , 20);
    InsertFirst(&first , 51);
  
    Display(first);
    
    reverse(first);
    Display(first);
    
    return 0;
}