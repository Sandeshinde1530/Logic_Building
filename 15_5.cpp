#include<iostream>

using namespace std;

int MultOdd(int Arr[] , int iLength )
{
    int iMult = 1;
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt] % 2 !=0)       
        {
            iMult *= Arr[iCnt];
        }
    }  

    return iMult;   
}

int main()
{
    int iSize = 0 ;
    int iRet = 0 ;


    int *p = NULL;

    cout<<"How many elements:";
    cin>>iSize;

    p =new int[iSize];

    cout<<"Enter the  "<<iSize<<"  elements:\n";

    for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        cin>>p[iCnt];
    }

    iRet = MultOdd(p , iSize);
    cout<<iRet;

    delete[]p;
    
    return 0;
}