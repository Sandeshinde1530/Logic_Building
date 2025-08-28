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

void DigitSum(PNODE head)
{
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    while(head!= NULL)
    {
        iSum = 0;
        iNo = head->data;
        while(iNo > 0)
        {   
            iDigit = iNo % 10;
            iSum += iDigit;
            iNo /= 10;            
        }
        printf("%d\t",iSum);
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
    
    DigitSum(first);
    
    return 0;
}