#include<iostream>

using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;
    
    if( iNo  > 0)
    {
        iFact *= iNo;
        iNo--;
        Fact(iNo);
       return iFact;
    }
}

int main()
{
    int iValue  = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    int iRet = Fact(iValue);
    cout<<iRet<<endl;

}