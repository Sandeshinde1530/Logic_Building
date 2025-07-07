#include<iostream>

using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        cout<<"*\t";
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter the number:";
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}