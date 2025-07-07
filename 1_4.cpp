#include<iostream>

using namespace std;

bool Check(int iNo)
{
    if(iNo % 5 == 0)
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number:";
    cin>>iValue;
    

    bRet = Check(iValue);

    if(bRet == true)
    {
        cout<<"It is divisible by 5";
    }
    else
    {
        cout<<"It is not divisible by 5";
    }
    
    return  0;
}