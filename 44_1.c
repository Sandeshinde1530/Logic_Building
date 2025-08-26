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

int SearchFirstOcc(PNODE head , int no)
{
    int iPos = 0;
    int i = 0;
    while(head!= NULL)
    {
        i++;
        if(head->data == no)
        {
           iPos = i;
           break;
        }
        head = head->next;
    }
    return iPos;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 70);
    InsertFirst(&first , 30);
    InsertFirst(&first , 50);
    InsertFirst(&first , 40);
    InsertFirst(&first , 30);
    InsertFirst(&first , 20);   
    InsertFirst(&first , 10);
    Display(first);
    
    iRet = SearchFirstOcc(first , 30);
    printf("Found ad position : %d\n",iRet);





    return 0;
}