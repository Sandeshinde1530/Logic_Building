#include<stdio.h>

double CircleArea(float fRad)
{

    float Pi = 3.14;
    double dArea =  Pi*fRad*fRad;

    return dArea;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.00;

    printf("Enter thr radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is : %0.4lf",dRet);

    return 0;
}