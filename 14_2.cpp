#include<iostream>

using namespace std;

int CountDiff(int Arr[] , int iLength)
{
    int iEvnFreq = 0;
    int iOddFreq = 0;
    int iDiff = 0;

    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvnFreq++;
        }
        else
        {
            iOddFreq++;
        }
    }

    iDiff = iEvnFreq - iOddFreq;
    return iDiff;
}

int main()
{
    int iSize = 0 , iRet = 0;
    int *p = NULL;

    cout<<"How many elements";
    cin>>iSize;

    p =new int;

    cout<<"Enter the"<<iSize<<"elements:";

    for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        cin>>p[iCnt];
    }

    iRet = CountDiff(p , iSize);
    cout<<iRet;

    return 0;
}