#include<iostream>

using namespace std;

void PrtMat(int iRow , int iCol)
{   int i = 0 ,j = 0;
    char ch = 'A';

    for(i = 1 ; i<= iRow; i++ , ch++)
    {
        for(j = 1 ; j <=  iCol ; j++)
        {
           cout<<ch<<"\t";
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