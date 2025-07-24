#include<stdio.h>

void PrtMat(int iRow , int iCol)
{   int i = 0 ,j = 0;

    for(i = 1 ; i<= iRow; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0 , iCol = 0;

    printf("Enter the rows and columns :\n");
    scanf("%d %d", &iRow , &iCol);

    PrtMat(iRow , iCol);
}