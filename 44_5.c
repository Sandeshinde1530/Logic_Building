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

int Min(PNODE head)
{
    int iMin = head->data;
    while(head!= NULL)
    {
        if(iMin > head->data)
        {
            iMin = head->data;
        }
        head = head->next;
        
    }
    return iMin;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    // InsertFirst(&first , 70);
    // InsertFirst(&first , 30);
    // InsertFirst(&first , 50);
    InsertFirst(&first , 40);
    InsertFirst(&first , 30);
    InsertFirst(&first , 1120);   
    InsertFirst(&first , 120);
    Display(first);
    
    iRet = Min(first);
    printf("Min is : %d\n",iRet);
    return 0;
}