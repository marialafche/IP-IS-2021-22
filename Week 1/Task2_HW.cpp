#include <iostream>
using namespace std;

int main()
{
    double Farenheit, Celsius, Kelvin;
    cout << "Enter Farenheit: " << endl;
    cin >> Farenheit;
    

    int choice;  
    cout<<"Type 1 for Celsius or 2 for Kelvin:"<<endl;
    cin >> choice;
    
    if (choice == 1)
    {
        cout << "Celsius is: " << ((Farenheit - 32) * 5)/9 << endl;
    }
    else if (choice == 2)
    {
        cout << "Kelvin is: " << (((Farenheit - 32) * 5)/9) + 273.15<< endl;
    }
    else 
    {
        cout << "The number you entered is incorrect."<<endl;
    }

    return 0;
}