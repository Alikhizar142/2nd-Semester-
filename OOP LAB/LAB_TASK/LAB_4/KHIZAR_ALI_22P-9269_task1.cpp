#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Account {

string name;
int balance;

public:
void set_Name(string N)
{
    name=N;
}
string get_Name()
{
    return name;
}
void set_Balance(int bal)
{
    balance=bal;
}
int get_Balance()
{
    return balance;
}

void deposit_Amount(int b)
{
    balance=balance+b;
}
void withdraw_Amount(int w)
{
    if(w>balance)
    {
        cout<<"Your account balance is not enough:"<<endl;
    }
    else
{

 balance=balance-w;
 cout<<"Tranction Sucessful"<<endl;
} 
}
};
Account create_Account()
{    Account A;
     string name;
     int d;
     cout<<"Enter account holder name:"<<endl;
     cin>>name;
     A.set_Name(name);
     cout<<"Enter The amount you want to deposit"<<endl;
     cin>>d;
     A.set_Balance(d);
     return A;
}
int main()
{
    Account A=create_Account();
    int input;
    while(1)
    {
        cout<<"1. Display Balance"<<endl;
        cout<<"2. Deposit Amount"<<endl;
        cout<<"3. Withdraw Amount"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>input;
        if(input==1)
        {
            cout<<A.get_Balance()<<endl;
        }
        else if(input==2)
        {  int amount;
            cout<<"Enter the amount you want to deposit"<<endl;
            cin>>amount;
            A.deposit_Amount(amount);
        }
          else if(input==3)
        {  int amount;
            cout<<"Enter the amount you want to withdraw"<<endl;
            cin>>amount;
            A.withdraw_Amount(amount);
        }
        else
        break;
    }
}