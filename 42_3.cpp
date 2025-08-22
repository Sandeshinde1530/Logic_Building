#include<iostream>

using namespace std;

int Str(char str[])
{
    static int iCount = 1;
    
    if( str[iCount]  != '\0')
    {
        iCount++;
        Str(str);
        return iCount;
    }
}

int main()
{
    char cptr[50] ;

    cout<<"Enter the string : ";
    cin>>cptr;

    int iRet = Str(cptr);
    cout<<iRet<<endl;

}