#include<iostream>
#include"item.h"
using namespace std;
void Display_items(ItemType S[],int n);
void Update_items(ItemType &S);
void Search_ID(ItemType S[],int ID,int n);
void Enter_data(ItemType S[],int n);
int main()
{
    cout<<"Enter number of items"<<endl;
     int n;
    cin>>n;
    int size=n;
    ItemType S[n];
     cout<<" Enter Data"<<endl;
      Enter_data(S,n);
    while (1)
    {
       
        cout<<"1). Display Items"<<endl;
        cout<<"2). Update item details"<<endl;
        cout<<"3). Search for items by ID"<<endl;
        int input;
        cin>>input;
        
         if(input==1)
        {
            Display_items(S,n);
        }
        else if(input==3)
        {
            cout<<"Enter Id of the Product "<<endl;
            int input;
            cin>>input;
            for(int i=0;i<n;i++)
            {
               if(S[i].Return_id()  == input)
               {
                   Update_items(S[i]);
               }
            }

        }
        else if(input==4)
        {
             cout<<"Enter Id of the Product "<<endl;
            int input;
            cin>>input;
            Search_ID(S,input,n);
        }
        else
        break;
        

    }
    



}
void Display_items(ItemType S[],int n)
{
   for(int i=0;i<n;i++)
   {
       S[i].display_Data();
   }
}
void Update_items(ItemType &S)
{
     cout<<"1.Update Price"<<endl;
     cout<<"2.Update quantity"<<endl;
     int a;
     cin>>a;
     if(a==1)
     {
         S.get_price();
     }
     else if(a==2)
     {
         S.get_quantity();
     }
}
void Search_ID(ItemType S[],int ID,int n)
{
    for(int i=0;i<n;i++)
    {
       if(S[i].Return_id()==ID)
       {
       	
           S[i].display_Data();
           break;
       }
       else
       cout<<"Item Not Found"<<endl;

    }
}
void Enter_data(ItemType S[],int n)
{
    for(int i=0;i<n;i++)
    {
        S[i].get_Data();
    }
}