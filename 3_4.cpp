#include<iostream>
#include<string>

using namespace std;

void DisplayConvert(char cAlpha)
{
    char c = '\0';
    if(cAlpha >= 65 && cAlpha <=90)
    {
        c= cAlpha + 32;
        cout<< c;
    } 
    else if(cAlpha >= 90 && cAlpha <=122)
    {
        c= cAlpha - 32;
        cout<< c;
    }
    
        
}

int main()
{
    char cValue = '\0';

    cout<<"Enter the Alphabet :";
    cin>>cValue;

    DisplayConvert(cValue);

    return 0;
}
