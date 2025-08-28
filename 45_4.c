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

int SecMax(PNODE head)
{
    int iMax = head->data;
    int iSecMax = head->data;

    while(head!= NULL)
    {
        if(head->data  > iMax)
        {
           iSecMax = iMax;
           iMax = head->data;
        }
        head = head->next;        
    }
    return iSecMax;
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
    
    iRet = SecMax(first);
    printf("Second max number is : %d\n",iRet);
    return 0;
}