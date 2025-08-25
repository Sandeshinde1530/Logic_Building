#include<iostream>

using namespace std;

int rev(int iNo)
{
    static int iNum = 0;
    static int digit = 0;
    
    if( iNo  > 0)
    {
        iNum  = iNum *10;
        digit = (iNo % 10);
        iNum += digit;
        iNo = iNo / 10;
        rev(iNo);
       return iNum;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = rev(iValue);
    cout<<iRet<<endl;

}
