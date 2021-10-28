#include <iostream>
#include <math>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    double distance;

    cout << "Point 1: " << endl << "x = ";
    cin >> x1;
    cout << "y = ";
    cin >> y1;
    
    cout << "Point 2: " << endl << "x = ";
    cin >> x2;
    cout << "y = ";
    cin >> y2;

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << "Result: " << distance << endl;

    return 0;
}