#include<iostream>

using namespace std;

void ChkVowel(char cAlpha)
{
    if(cAlpha == 'a' ||cAlpha == 'e'||cAlpha == 'i'||cAlpha == 'o'||cAlpha == 'u'||cAlpha == 'A'||cAlpha == 'E'||cAlpha == 'I'||cAlpha == 'O'||cAlpha == 'U')
    {
        cout<<"It is a vowel";
    }
    else
    {
        cout<<"It is not a vowel";
    }
}

int main()
{
    char cValue = '\0';

    cout<<"Enter the character : ";
    cin>>cValue;

    ChkVowel(cValue);
}