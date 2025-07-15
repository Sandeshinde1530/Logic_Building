#include<iostream>

using namespace std;

class Demo
{
    public:
        int iNo;

        Demo(int A)
        {
            iNo = A;
        }

        void Pattern()
        {
            int iCnt = 0;

            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                cout<<"*\t";
            }
            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                cout<<"#\t";
            }

        }

};

int main()
{

    int iValue = 0;

    cout<<"enter the number : ";
    cin>>iValue;

        Demo dobj(iValue);

        dobj.Pattern();


    return 0;
}