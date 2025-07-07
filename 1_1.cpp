#include<iostream>

using namespace std;

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;

    if(iNo1 < iNo2)
    {
        return -1;
    }
    else
    {
        iAns = iNo1 / iNo2;
    }

    return iAns;
}



int main()
{
    int iValue1 = 25 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    cout<<"Division is : "<<iRet<<endl;


    return 0;
}