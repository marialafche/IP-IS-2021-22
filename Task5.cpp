#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    bool istrue = (p % 4 == 0 || p % 7 == 0) ? true : false;
    cout << boolalpha << istrue << endl;

    return 0;
}