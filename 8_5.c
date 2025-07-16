#include<stdio.h>

double FhtoCs( float fNo )
{
    double dSqM = 0.000;

    dSqM  = fNo *0.0929;


  
    return dSqM;

}

int main()
{
    float fvalue = 0.0 ;
    double dRet = 0.00;

    printf("Enter measurement in square feet: ");
    scanf("%f",&fvalue);

    dRet = FhtoCs(fvalue);

  printf("The area in squarefeet is : %0.8lf", dRet);

    return 0;
}