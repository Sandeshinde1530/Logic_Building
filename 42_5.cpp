#include<iostream>

using namespace std;

int Prod(int iNo)
{
    static int iProd = 1;
    
    if( iNo  > 0)
    {
        iProd *= (iNo % 10);
        iNo = iNo / 10;
        Prod(iNo);
       return iProd;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = Prod(iValue);
    cout<<iRet<<endl;

}