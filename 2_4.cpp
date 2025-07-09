#include<iostream>

using namespace std;

void Display(int iNo , int iFreq)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <=iFreq;iCnt++)
    {
        cout<<iNo<<endl;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    cout<<"Enter two numbers :";
    cin>>iValue1>>iValue2;

    Display(iValue1,iValue2);

    return 0 ;
}