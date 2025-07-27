#include<iostream>

using namespace std;

void PrtMat(int iRow , int iCol)
{   int i = 0 ,j = 0;
    int iNo = 1;

    for(i = iRow ; i > 0; i-- )
    {
        for(j = 1 ; j <=  iCol ; j ++ ,iNo++)
        {
           cout<<iNo<<"\t";
        }
        cout<<"\n";
        
    }
}

int main()
{
    int iRow = 0 , iCol = 0;

    cout<<"Enter the rows and columns :\n"<<endl;
    cin>>iRow>>iCol;

    PrtMat(iRow , iCol);
}