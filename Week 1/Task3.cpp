#include <iostream>
using namespace std;

int main()
{
    int number1, number2, temp;
    cin>>number1>>number2;
    temp = number1;
    number1 = number2;
    number2 = temp;
    cout<<number1<<""<<number2<<endl;

return 0;
}