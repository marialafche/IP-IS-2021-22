#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;

    if ((symbol >=65 && symbol <= 90) || (symbol >= 97 && symbol <= 122))
    {
        cout << "The symbol is a letter!" << endl;
    }
    else 
    {
        cout << "The symbol isn't a letter!"<< endl;
    }

    return 0;
}