#include<iostream>

using namespace std;

class Demo
{
    public:
        int iDol;

        Demo(int A)
        {
            iDol = A;
        }

        int DolarToInr()
        {
            int iInr = iDol * 70;
            return iInr;

        }



};

int main()
{

    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number : ";
    cin>>iValue;

        Demo dobj(iValue);

     iRet = dobj.DolarToInr();

     cout<<iRet<<endl;


    return 0;
}