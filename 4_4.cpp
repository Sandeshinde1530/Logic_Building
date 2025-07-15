#include<iostream>

using namespace std;

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum += iCnt;           
        }
    } 

    return iSum;   
}

int main()
{

    int iValue = 0 , iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = SumNonFact(iValue);

    cout<<iRet;

    return 0;
}