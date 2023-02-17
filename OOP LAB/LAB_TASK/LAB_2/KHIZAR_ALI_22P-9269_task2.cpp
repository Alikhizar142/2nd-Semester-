
#include<iostream>
#include<string.h>
using namespace std;
void A(char *Input)
{
 int len=strlen(Input);
 int count=0;
     for(int i=0;i<len-1;i++)  
    {
            if(Input[i]=='a'|| Input[i]=='e'||Input[i]=='i'||Input[i]=='o'||Input[i]=='u')
		        count++;
    
 	}
          cout<<"The Array has "<<count<<" vowles"<<endl;
  }
void B(char *Input)
{  
   int count=0,count1=0,len;
    len=strlen(Input);
    for(int i=0;i<len;i++)  
    {
            if(Input[i]=='a'|| Input[i]=='e'||Input[i]=='i'||Input[i]=='o'||Input[i]=='u')
		     {
                 count++;
             }
             else
             {
             count1++;
             }
 	}
 cout<<"The array has "<<count<<" vowles and "<<count1-1<<" consonents"<<endl;
}
void C(char *Input)
{
          char ch;
            int max=0;
             int  len = strlen(Input);
           for(int j=0; j<len-1; j++)
           {
                 int count = 0;
                  ch = Input[j];

                  for(int k=j+1;k<len-1; k++)
                  {
                 if(Input[k] == ch)
                    {
                      count++;
                    }
                  }
               if(count > max)
               {
                 max = count;
                 ch = Input[j];
               }
               
             }
                 cout<<"The most frequent character is "<<ch<<endl;
  }
void D(char *Input , char *second)
{
   strcat(Input," ");
    strcat(Input,second);
    cout<<Input<<endl;
}

int main()
{     char Input[100];
      char input;
      char second[20]={"Alikhizar@142"};
    cout<<"Enter The string"<<endl;
    cin.getline(Input,sizeof(Input));
    while (input!='E')
    {
         cout<<"A) Count the number of vowels in the string."<<endl;
         cout<<"B) Count both the vowels and consonants in the string."<<endl;
         cout<<"C) Display the most frequent character in the string."<<endl;
         cout<<"D) Concatenate another string with the existing string."<<endl;
         cout<<"E) Exit the program."<<endl;
         cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
         cout<<"Enter The Opeartion You want to Do"<<endl;
         cin>>input;
       if(input=='A')
       {   
          A(Input);
       }
        if(input=='B')
        {
            B(Input);
        }
        if(input=='C')
         {  
            C(Input);
         }
          if(input=='D')
          {
            D(Input,second);
          }
     }
     return 0;
}