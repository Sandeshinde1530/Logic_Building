#include<iostream>

using namespace std;

int CountEvn(int Arr[] , int iLength)
{
    int iFreq = 0;

    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFreq++;
        }
    }
    return iFreq;
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

    iRet = CountEvn(p , iSize);
    cout<<iRet;

    return 0;
}