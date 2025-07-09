#include<iostream>
using namespace std;

void PrtEvn(int iNo)
{
    int iCnt = 0 , i = 1;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        iCnt = 1;
        while(iCnt <= iNo)
        {
            if(i % 2 ==0)
            {
                cout<<i<<"\t";
                iCnt++;
            }
            i++;
        }
    }
}

int main()
{
    int iValue = 0;

   cout<<"Enter the number :";
    cin>>iValue;

    PrtEvn(iValue);



    return 0;
}
