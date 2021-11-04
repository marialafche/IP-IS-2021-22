#include <iostream>
using namespace std;

int main()
{
    int monthCheck;
    
    cout<<"Input a number"<<endl;
    
    cin>>monthCheck;
    
    if(monthCheck >= 1 && monthCheck <= 12)
    {
        cout<<"The number corresponds to a month"<<endl;
    }
    else
    {
        cout<<"The number doesn't correspond to a month"<<endl;
    }

    return 0;
}