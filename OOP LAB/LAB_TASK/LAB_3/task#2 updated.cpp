#include <iostream>
#include <iomanip>
using namespace std;
// Declaring structure
struct student {
  string name;
  int marks[3];
};

// Function to display data
void display_data( student s[3],int n) 
 {
   for(int i=0;i<n;i++)
   {
   cout<<"Name:"<<s[i].name<<endl;
   for(int j=0;j<3;j++)
   {
   cout<<"Marks of subject "<<j+1 <<": =  " <<s[i].marks[j]<<endl;
  }
  cout<<endl;
}
}

// Function to change marks
void change_marks( student &s)
{
  int course_no;
  int marks;
 
  cout<<"Enter course no: "<<endl;
  cin>>course_no;
 

  cout<<"Enter new marks: "<<endl;
  cin>>marks;

  
 s.marks[course_no-1] = marks;

  cout<<"Marks updated!"<<endl;
}

// Function to calculate average marks
float calc_average_marks(student s)
{
  int sum = 0;
  for (int i = 0; i < 3; i++) 
  {
    sum += s.marks[i];
  }
  return (float)sum / 3;
}

int main()
{
  int n=0;
  cout<<"Enter Number of students"<<endl;
  cin>>n;
  student s[n];
  
  for(int i=0;i<n;i++)
  {
      cout<<"Enter student"<<"  "<<i+1<<"  name"<<endl;
      cin>>s[i].name;
      for(int j=0;j<3;j++)
      {
          cout<<"Enter marks of subject"<<"  "<<j+1<<endl;
      cin>>s[i].marks[j];
      }
  }
     
     while(1)
     {
     cout<<"Menu"<<endl;
     cout<<"1.Display Student data"<<endl;
     cout<<"2.Calculate Average Marks"<<endl;
     cout<<"3.Update MArks"<<endl;
     cout<<"4.Exit"<<endl;
     
     cout<<"Select Option"<<endl;
     int input;
     cin>>input;
     if(input==1)
     {
         display_data(s,n);
     }
     else if(input==2)
     {
      cout<<"Enter The student number you want average"<<endl;
      int b;
      cin>>b;
     float a=calc_average_marks(s[b-1]);
     cout<<"The average marks  of  "<<s[b-1].name<<"=  "<<a<<endl;
     }
      else if(input==3)
      {
           int student;
  cout<<"Enter Student NUmber"<<endl;
  cin>>student;
        change_marks(s[student-1]);
      }
      else 
      break;
  }
  }

 

