#include<iostream>

using namespace std;

int Large(int iNo)
{
    static int iLarge = 0;
    static int digit = 0;
    
    if( iNo  > 0)
    {
        digit = (iNo % 10);
        if(digit > iLarge)
        {
            iLarge = digit;
        }
        iNo = iNo / 10;
        Large(iNo);
       return iLarge;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = Large(iValue);
    cout<<iRet<<endl;

}