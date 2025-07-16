#include<stdio.h>

double RectArea(float fwidth, float fheight)
{

    double dArea =  fwidth * fheight;

    return dArea;

}

int main()
{
    float fHeight = 0.0 , fWidth = 0;
    double dRet = 0.00;

    printf("Enter thr width and height:");
    scanf("%f %f",&fWidth , &fHeight);

    dRet = RectArea(fWidth , fHeight);

    printf("Area is : %0.4lf",dRet);

    return 0;
}