#include<iostream>

using namespace std;

int Small(int iNo)
{
    static int iSmall = iNo % 10;
    static int digit = 0;
    
    if( iNo  > 0)
    {
        digit = (iNo % 10);
        if(digit < iSmall)
        {
            iSmall = digit;
        }
        iNo = iNo / 10;
        Small(iNo);
       return iSmall;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = Small(iValue);
    cout<<iRet<<endl;

}