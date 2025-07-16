#include<stdio.h>

double FhtoCs( float fFah)
{
    double dCs = 0.000;

    dCs = ((fFah - 32) * (5.0   /   9.0));
    
  
    return dCs;

}

int main()
{
    float fvalue = 0.0 ;
    double dRet = 0.00;

    printf("Enter the temp in fahrenheit:");
    scanf("%f",&fvalue);

    dRet = FhtoCs(fvalue);

    printf("temperatur in celcius is  : %lf",dRet);

    return 0;
}