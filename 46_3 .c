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

void DisplayProduct(PNODE head)
{
    int iDigit = 0;
    int iProd = 0;
    int iNo = 0;

    while(head!= NULL)
    {
        iProd = 1;
        iNo = head->data;
        if(iNo == 0)
        {
            printf("0\t");
        }
        else
        {
           while(iNo > 0)
        {   
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iNo /= 10;            
                continue;
            }
            iProd *= iDigit;
            iNo /= 10;            
        }
        printf("%d\t",iProd);
        }
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
    InsertFirst(&first , 0);
    InsertFirst(&first , 11);
  
    Display(first);
    
    DisplayProduct(first);
    
    return 0;
}