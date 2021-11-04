#include <iostream>
using namespace std;

int main()
{
    int ax, bx, c;
    
    cout << "Enter three number: ";
    cin >> ax >> bx >> c;
    
    double d;
    
    if (ax == 0 || bx == 0 || c == 0) 
    {
        cout << "This is not quadratic equation" << endl;
        return 0;
    }
    if (bx % 2 == 0) 
    {
        d = (bx / 2) * (bx / 2) - ax * c;
    } 
    else 
    {
        d = bx * bx - 4 * ax * c;
    }
    
    double x1, x2;
    x1 = (bx * (-1) + sqrt(d)) / ax;
    x2 = (bx * (-1) - sqrt(d)) / ax;
    
    cout << "x1 = " << x1 << "x2 = " << x2 << endl;
    
    return 0;
}
    