#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num>=0 && num<=9) 
        switch (num)
        {
        case  0 :
            cout<<1<<" "<<"Zero"<<endl;
            break;
        case  1 :
            cout<<0<<" "<<"One"<<endl;
            break;

        case  2 :
            cout<<0<<" "<<"Two"<<endl;
            break;

        case  3 :
            cout<<0<<" "<<"Three"<<endl;
            break;

        case  4 :
            cout<<0<<" "<<"Four"<<endl;
            break;

        case  5 :
            cout<<0<<" "<<"Five"<<endl;
            break;

        case  6 :
            cout<<1<<" "<<"Six"<<endl;
            break;

        case  7 :
            cout<<0<<" "<<"Seven"<<endl;
            break;

        case  8 :
            cout<<2<<" "<<"Eight"<<endl;
            break;

        case  9 :
            cout<<1<<" "<<"Nine"<<endl;
            break;


        default:

            break;
        }
    else
    {
        cout << "Error" << endl;
    }

    int num;
    cin >> num;
    if (num >= 0 && num <= 9)
    {
        switch(num)
        {
            case 0 :
            case 6 :
            case 9 :
            {
                cout << "1" << endl;
            }
            break;
            case 1 :
            case 2 :
            case 3 :
            case 4 :
            case 5 :
            case 7 :
            {
                cout << "0" << endl;
            }
            break;
            case 8 :
               cout << "2" << endl;
            default:
            break;
        }
   
    }
    else 
    {
        cout << "Not a digit" << endl;
    }

    return 0;
}