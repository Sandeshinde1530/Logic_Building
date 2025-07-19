#include<iostream>

using namespace std;

int FirstOcc(int Arr[] , int iLength , int iNum)
{
    int iPos = 0;

    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt]== iNum)
        {
           iPos = iCnt;
           break;
        }       
    }    
    return iPos;
}

int main()
{
    int iSize = 0 ;
    int iRet = 0 , iNo = 0;
    int *p = NULL;

    cout<<"How many elements";
    cin>>iSize;

    p =new int[iSize];

    cout<<"Enter the"<<iSize<<"elements:";

    for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        cin>>p[iCnt];
    }

    cout<<"Enter number to find Position";
    cin>>iNo;


    iRet = FirstOcc(p , iSize, iNo);
    cout<<iRet;

    delete[]p;
    
    return 0;
}