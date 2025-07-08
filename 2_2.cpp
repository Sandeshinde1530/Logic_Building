#include<iostream>

using namespace std;

void Display(int iNo)
{
    while(iNo > 0)
    {
        cout<<"*\t";
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    Display(iValue);

    return 0 ;
}