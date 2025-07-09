#include<iostream>

using namespace std;

bool ChkEven(int iNo )
{
    if(iNo % 2 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0 ;
    bool bRet = false;

    cout<<"Enter  numbers :";
    cin>>iValue1;

    bRet = ChkEven(iValue1);

    if(bRet ==true)
    {
        cout<<"It is even";
    }
    else
    {
        cout<<"It is ODD";
    }
    return 0 ;
}