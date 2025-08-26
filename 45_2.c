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

void DisplayPrime(PNODE head)
{
    int iFact = 0;
    while(head != NULL)
    {
        iFact = 0;
        for(int i = 2 ; i <=((head->data)/2) ; i++)
        {
            if(head->data % i == 0)
            {
                iFact = 1;
                break;
            }
        }
        if(iFact == 0)
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

    DisplayPrime(first);
    
    return 0;
}