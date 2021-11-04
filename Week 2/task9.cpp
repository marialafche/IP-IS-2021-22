#include <iostream>
using namespace std;

int main()
{
    double sum;
    int from, to;
    
    cout << "1 - BGN \n2 - USD \n3 - EUR\n4 - GBP\n";
    
    cout << "Choose currencies by entering the coresponding number\n";
    
    cout << "Enter <sum> <from currency> <to currency>: ";
    
    cin >> sum >> from >> to;

    if (sum < 0) 
    {
        cout << "Invalid sum\n";
    } 
    else 
    {
        switch (from) 
        {
            case 1: {
                switch (to) 
                {
                    case 2: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.51 << endl;
                    break;
                    case 4: cout << sum * 0.43 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 2: 
            {
                switch (to) 
                {
                    case 1: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.86 << endl;
                    break;
                    case 4: cout << sum * 0.73 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 3:
            {
                switch (to) 
                {
                    case 1: cout << sum * 1.96 << endl;
                    break;
                    case 2: cout << sum * 1.16 << endl;
                    break;
                    case 4: cout << sum * 0.84 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 4: 
            {
                switch (to) 
                {
                    case 1: cout << sum * 2.32 << endl;
                    break;
                    case 2: cout << sum * 1.37 << endl;
                    break;
                    case 3: cout << sum * 1.18 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            default: cout << "Invalid currency\n";
        }
    }


    return 0;
}