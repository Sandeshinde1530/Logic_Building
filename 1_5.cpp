#include<iostream>

using namespace std;

void Display(int iNo)
{
    for(int  i = 0; i <iNo; i++)
    {
        cout<<"*\t";
    }
}

int main()
{

    int iValue = 0;

    cout<<"enter the number :";
    cin>>iValue;

        Display(iValue);
        
    return  0;
}