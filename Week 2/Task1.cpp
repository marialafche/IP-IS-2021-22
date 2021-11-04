#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;

    cin>>firstNum>>secondNum;

    if(firstNum > secondNum)
    {
        cout << firstNum;
    }
    else if(firstNum == secondNum)
    {
        cout << "There is no bigger number!" << endl;
    }

    else 
    {
        cout << secondNum;
    }

    return 0;
}