#include<iostream>

using namespace std;

bool CountElevn(int Arr[] , int iLength , int iNum)
{
    bool bFlag = false;

    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt]== iNum)
        {
            bFlag = true;
            break;
        }       
    }    
    return bFlag;
}

int main()
{
    int iSize = 0 ;
    int iNo = 0;
    bool bRet =false ; 
    int *p = NULL;

    cout<<"How many elements";
    cin>>iSize;

    p =new int[iSize];

    cout<<"Enter the"<<iSize<<"elements:";

    for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        cin>>p[iCnt];
    }

    cout<<"Enter number to find:\n";
    cin>>iNo;


    bRet = CountElevn(p , iSize, iNo);
    
    if(bRet ==false)
    {
        cout<<"not present\n";
    }
    else
    {
        cout<<"present\n";
    }
    

    delete[]p;
    
    return 0;
}