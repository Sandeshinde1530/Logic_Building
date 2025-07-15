#include<iostream>

using namespace std;

class Demo
{
    public:
        int FactDiff(int iNo)
        {
            
            int iCnt = 0, iDiff = 0;
            int iEvnFact = 1 , iOddFact = 1;


            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1 ; iCnt <= iNo;iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    iEvnFact = iEvnFact*iCnt;
                }
                else
                {
                    iOddFact = iOddFact*iCnt;
                }
            }

            iDiff = iEvnFact - iOddFact ;

            return iDiff;
        }
};
int main()
{

    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number : ";
    cin>>iValue;

    Demo dobj;

     iRet = dobj.FactDiff(iValue);

     cout<<iRet<<endl;

    return 0;
}