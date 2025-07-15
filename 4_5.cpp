#include<iostream>

using namespace std;

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumNonFact = 0;
    int iDiff = 0;


    for(iCnt = 1 ;iCnt <iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt;  
        }
        else
        {
            iSumNonFact += iCnt;
        }
    } 

    iDiff = iSumNonFact - iSumFact;

    return iDiff;   
}

int main()
{

    int iValue = 0 , iRet = 0;


    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = FactDiff(iValue);

    cout<<"%d",iRet;

    return 0;
}