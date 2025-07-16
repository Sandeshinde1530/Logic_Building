#include<stdio.h>

double KMtoMeter(float fDist)
{

    double dmeter = 0.00 ;

    dmeter = fDist *1000;


    return dmeter;

}

int main()
{
    float fDist = 0.0 ;
    double dRet = 0.00;

    printf("Enter the distancet:");
    scanf("%f",&fDist);

    dRet = KMtoMeter(fDist);

    printf("Distance is : %0.1lf",dRet);

    return 0;
}