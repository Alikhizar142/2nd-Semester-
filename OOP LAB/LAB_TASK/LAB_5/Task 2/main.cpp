#include<iostream>
#include"employ.h"
#include<string>
using namespace std;
int main()
{
    cout<<"Enter Number of Employs "<<endl;
    int n;
    cin>>n;
    Employee S[n];
    int salary;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Data for Employ "<<i+1<<endl;
        S[i].get_data();
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<"************** Data of Employee "<<"*****************"<<i+1<<endl;
        cout<<"Name of the Employee is "<<S[i].display_name()<<endl;
        salary=S[i].cacl_Salary();
        cout<<"The Salary is RS "<<salary<<endl;
    }
}

