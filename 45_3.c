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

int SumEvn(PNODE head)
{
    int iSumEvn = 0;
    while(head!= NULL)
    {
        if(head->data % 2 == 0)
        {
            iSumEvn += head->data;
        }
        head = head->next;        
    }
    return iSumEvn;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 41);
    InsertFirst(&first , 32);
    InsertFirst(&first , 20);
    InsertFirst(&first , 11);
  
    Display(first);
    
    iRet = SumEvn(first);
    printf("Sum is : %d\n",iRet);
    return 0;
}