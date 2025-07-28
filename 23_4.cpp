#include<iostream>

using namespace std;

void Pattern(int iRow , int iCol)
{
   for(int i = 1 ; i<= iRow ; i++ )
   {
    for(int j = 1 ; j<= iCol ; j++)
    {
        if(i == 1 || i == iRow || j == 1 || j == iCol)
        {
            cout<<"*\t";
        }
        else
        {
            cout<<"@\t";
        }
    }
    cout<<"\n";
   }
}

int main()
{
    int iRow = 0 , iCol = 0;

    cout<<"Enter the row and columns :"<<endl;
    cin>>iRow>>iCol;

    Pattern(iRow ,  iCol);

    return 0;
}