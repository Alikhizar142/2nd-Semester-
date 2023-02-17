
#include <iostream>
using namespace std;

int main()
{
    int seconds;int minutes; int hours; int days;
    
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    
    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    days = hours / 24;
    hours = hours % 24; 
    cout << days << " day(s) " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)." << endl;
    return 0;
}