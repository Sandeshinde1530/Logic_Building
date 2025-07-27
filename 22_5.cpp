#include<iostream>

using namespace std;

void Mat(int iRow , int iCol)
{
    
    int iCounter = 1;
    for(int i = 1 ; i<= iRow ; i++)
    {      
        iCounter = i;
        for(int j = 1 ; j<= iCol; j++, iCounter++)
        {  
            cout<<iCounter<<"\t";        
        }
        cout<<"\n";
    }
}

int main()
{
    int iRow = 0 , iCol = 0;

    cout<<"Enter the row and columns :"<<endl;
    cin>>iRow>>iCol;

    Mat(iRow ,  iCol);

    return 0;
}