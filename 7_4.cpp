#include<iostream>

using namespace std;

class Demo
{
    public:
        int OddvnFact(int iNo)
        {
            
            int iCnt = 0;
            int iFact = 1;


            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1 ; iCnt <= iNo;iCnt++)
            {
                if(iCnt % 2 != 0)
                {
                    iFact = iFact*iCnt;
                }
            }

            return iFact;
        }
};
int main()
{

    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number : ";
    cin>>iValue;

    Demo dobj;

     iRet = dobj.OddvnFact(iValue);

     cout<<iRet<<endl;

    return 0;
}