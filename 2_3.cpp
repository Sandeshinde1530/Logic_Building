#include<iostream>

using namespace std;

void Display(int iNo)
{
    if(iNo < 10)
    {
        cout<<"Hello";
    }
    else
    {
        cout<<"Demo";
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