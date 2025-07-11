#include<iostream>

using namespace std;

int MultFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }
    return iMult;   
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = MultFact(iValue);

    cout<<iRet<<endl;

    return 0;
}