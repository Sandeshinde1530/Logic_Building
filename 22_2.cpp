#include<iostream>

using namespace std;

void Mat(int iRow , int iCol)
{
    int iCnt = 0;
    iCnt = 1;
    for(int i = 1 ; i<= iRow ; i++)
    {
        iCnt = 1;
        for(int j = 1 ; j<= iCol; iCnt++)
        {
           
            if( i%2 != 0 && iCnt%2 == 0 ) 
            {
                
                    cout<<iCnt<<"\t";
                    j++;
            }
            else if(i%2 == 0&& iCnt%2 != 0)
            {
                cout<<iCnt<<"\t";
                    j++;
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

    Mat(iRow ,  iCol);

    return 0;
}