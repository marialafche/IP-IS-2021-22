#include <iostream>
using namespace std;

int main()
{
    int x,a,b;
    
    cout<<"Your number: ";
    cin>>x;
    
    cout<<endl<<"Input range: ";
    cin>>a>>b;
    if( b <= a)
    {
        cout<<"Wrong range!"<<endl;
        return 0;
    }
    if (x > a && x < b)
    {
        cout<<"Your number is in the range!"<<endl;
    }
    else
    {
        cout<<"Your number is NOT in the range!"<<endl;
    }

    return 0;
}