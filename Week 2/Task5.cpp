#include <iostream>
using namespace std;

main()
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if ((a > 0 && b < 0) || (a < 0 && b> 0))
    {
        cout << "There is one positive number!" << endl;
    }
    else if(a > 0 && b > 0)
    {
         cout << "Both numbers are positive!" << endl;
    }
    else
    {
         cout << "There are no positive numbers!" << endl;
    }

    return 0;
}