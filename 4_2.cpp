#include<iostream>

using namespace std;

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\t";
            
        }
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    FactRev(iValue);
    return 0;
}