#include<iostream>

using namespace std;

void Display()
{
    int i = 0;
    char Arr[] = "Marvellous";

    for(i = 0; i< 5;i++)
    {
        cout<<i+1<<". "<<Arr<<endl;
    }

}

int main()
{
    Display();
    return 0;
}
