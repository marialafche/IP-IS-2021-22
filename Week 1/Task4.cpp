#include <iostream>
using namespace std;

int main()
{
    int number, result, first, second, third;

    cout<<"Insert a 3-digit number: "<<endl;
    cin>>number;
    first = number % 10;
    second = (number/10) % 10;
    third = number/100;
    result = first + second + third;
    cout<< "Result: " << result << endl;
    
    return 0;
}