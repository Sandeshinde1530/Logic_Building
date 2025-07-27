#include<iostream>

using namespace std;

void PrtMat(int iRow , int iCol)
{   int i = 0 ,j = 0;
    char ch = 'a';
    char CH = 'A';

    for(i = 1 ; i<= iRow; i++)
    {
        for(j = 1 ; j <=  iCol ; j++,ch++,CH++)
        {
            if(i % 2 == 0)
            {
               cout<<ch<<"\t"; 
            }
            else
            {
                 cout<<CH<<"\t"; 
            }
           
        }
        cout<<"\n";
        ch = 'a';
        CH = 'A';
    }
}

int main()
{
    int iRow = 0 , iCol = 0;

    cout<<"Enter the rows and columns :\n"<<endl;
    cin>>iRow>>iCol;

    PrtMat(iRow , iCol);
}