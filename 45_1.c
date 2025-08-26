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

void DisplayPerfect(PNODE head)
{
    int iSumFact = 0;
    while(head->next != NULL)
    {
        iSumFact = 0;
        for(int i = 1 ; i <=((head->data)/2) ; i++)
        {
            if(head->data % i == 0)
            {
                iSumFact += i;
            }
        }
        if(iSumFact == head->data)
        {
            printf("%d\n",head->data);
        }


        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    
    InsertFirst(&first , 89);
    InsertFirst(&first , 6);
    InsertFirst(&first , 41);
    InsertFirst(&first , 17);
    InsertFirst(&first , 28);   
    InsertFirst(&first , 11);
    Display(first);

    DisplayPerfect(first);
    
    return 0;
}