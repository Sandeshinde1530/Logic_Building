#include<iostream>

using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    
    if( iNo  > 0)
    {
        iSum += (iNo % 10);
        iNo = iNo / 10;
        Sum(iNo);
       return iSum;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = Sum(iValue);
    cout<<iRet<<endl;

}