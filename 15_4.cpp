#include<iostream>

using namespace std;

void PrtRange(int Arr[] , int iLength  , int iStart ,int iEnd)
{

    cout<<"Number between are :";
    
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
           cout<<Arr[iCnt]<<endl;
        }
             
    }    
    
}

int main()
{
    int iSize = 0 ;
    int iStart = 0 ,iEnd = 0;


    int *p = NULL;

    cout<<"How many elements:";
    cin>>iSize;

    p =new int[iSize];

    cout<<"Enter the  "<<iSize<<"  elements:\n";

    for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        cin>>p[iCnt];
    }

    cout<<"Enter the Range:\n";
    cin>>iStart>>iEnd;

    PrtRange(p , iSize, iStart , iEnd);

    delete[]p;
    
    return 0;
}