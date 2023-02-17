#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Dice {

int value;

public:
void roll()
{
    value=rand()%6+1;
    cout<<"Side:"<<value<<endl;
    if (value==6)
    {
      cout<<"Chakaaaaaa"<<endl;
    }
    else
    cout<<"Better luck next time"<<endl;
}
};

int main()
{
   Dice a;
    while(1)
    {
        cout<<"Do you want to roll the dice? Y/N"<<endl;
        char input;
        cin>>input;
        if(input=='y'||input=='Y')
        {
           a.roll();
        }
        else 
        break;
    }
}