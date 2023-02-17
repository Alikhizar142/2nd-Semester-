#include <iostream>
using namespace std;

int main()
{
    char response;int price=0;
    cout << "Do you want a burger (Y/N)? ";
    cin >> response;
    if (response == 'Y' || response == 'y')
    {     price=500;
        cout << "Do you want an add-on of fries and cold drink for 200 Rs only (Y/N)? ";
        cin >> response;
        if (response == 'Y' || response == 'y')
        {     price=price+200;
            cout << "The total price is  Rs"<<price << endl;
        }
        else if (response == 'N' || response == 'n')
        {
            cout << "The total price is Rs"<<price << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else if (response == 'N' || response == 'n')
    {   price=0;
        cout << "The total price is  Rs"<<price << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}