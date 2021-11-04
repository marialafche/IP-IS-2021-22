#include <iostream>
using namespace std;

main()
{
    int numberMonth;

    cout << "Enter the number of the month: ";
    cin >> numberMonth;

    if (numberMonth == 1)
    {
        cout << "January" << endl;
    }
    else if (numberMonth == 2)
    {
        cout << "Fabruary" << endl;
    }
    else if (numberMonth == 3)
    {
        cout << "March" << endl;
    }
    else if (numberMonth == 4)
    {
        cout << "April" << endl;
    }
    else if (numberMonth == 5)
    {
        cout << "May" << endl;
    }
    else if (numberMonth == 6)
    {
        cout << "June" << endl;
    }
    else if (numberMonth == 7)
    {
        cout << "July" << endl;
    }
    else if (numberMonth == 8)
    {
        cout << "August" << endl;
    }
    else if (numberMonth == 9)
    {
        cout << "September" << endl;
    }
    else if (numberMonth == 10)
    {
        cout << "October" << endl;
    }
    else if (numberMonth == 11)
    {
        cout << "November" << endl;
    }
    else if (numberMonth == 12)
    {
        cout << "December" << endl;
    }
    else
    {
        cout << "Please enter a correct number!" << endl;
    }


    return 0;
}