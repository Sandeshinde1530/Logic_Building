#include<iostream>

using namespace std;

int Str(char *str)
{
    static int iCount = 0;
    static int i = 0;
    
    if( str[i]  != '\0')
    {
        if(str[i] ==' ')
        {
            iCount++;
        }
        i++;
        Str(str);
        return iCount;
    }
}

int main()
{
    char cptr[50] ;

    cout<<"Enter the string : ";
    cin.getline(cptr, 50);

    int iRet = Str(cptr);
    cout<<iRet<<endl;

}