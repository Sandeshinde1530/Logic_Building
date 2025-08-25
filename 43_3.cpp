#include<iostream>

using namespace std;

int small(string str)
{
    static int iCount = 0;
    static int i = 0;
    
    if( str[i]  != '\0')
    {
        if(str[i] <= 122 && str[i] >= 97 )
        {
            iCount++;
        }
        i++;
        small(str);
        return iCount;
    }
}

int main()
{
    string str ;

    cout<<"Enter the string : ";
    cin>>str;

    int iRet = small(str);
    cout<<iRet<<endl;

}