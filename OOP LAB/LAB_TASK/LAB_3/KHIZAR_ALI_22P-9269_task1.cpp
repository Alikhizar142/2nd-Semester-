// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct MovieData
{
    string Title;
    string Director;
    int year;
};
MovieData creatMovieData()
{   MovieData S;
    cout<<"Enter Movie Name:"<<endl;
    cin>>S.Title;
    cout<<"Enter Director  Name:"<<endl;
    cin>>S.Director;
    cout<<"Enter Released Year:"<<endl;
    cin>>S.year;
    return S;
    
}
void DisplayMovieData(MovieData A)
{
    cout<<left<<setw(50)<<setfill('.')<<"Movie name is"<<A.Title<<endl;
    cout<<left<<setw(50)<<setfill('.')<<"Director  name is"<<A.Director<<endl;
    cout<<left<<setw(50)<<setfill('.')<<"Released Date is"<<A.year<<endl;
}

int main() {
    // Write C++ code here
MovieData A;
A=creatMovieData();
DisplayMovieData(A);

    return 0;
}