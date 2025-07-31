#include<iostream>

using namespace std;

void Pattern(int iRow , int iCol)
{
    for(int i = 1 ;i<=iRow ; i++ )
    {
        for(int j = 1 ;j <= iCol ; j++)
        {
            if(i + j == iRow + 1)
            {
                cout<<"#\t";
            }
            else if (i + j > iCol + 1)
            {
                cout<<"@\t";
            }
            else if( i + j < iCol + 1)
            {
                cout<<"*\t";
            }
        }
        cout<<"\n";
    }

}

int main()
{

    int iRow = 0 ,iCol = 0;

    cout<<"Enter rows and columns ";
    cin>>iRow>>iCol;

    Pattern(iRow , iCol);
    return 0;
}

