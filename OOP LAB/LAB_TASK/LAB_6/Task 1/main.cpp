#include<iostream>
#include<string>
#include"song.h"
using namespace std;

int main()
{
    Favourite_songs f;
    int a;
    while (1)  
    {   cout<<"***************************Menu*******************************"<<endl;
        cout<<"1.Add song"<<endl;
        cout<<"2.Delete song"<<endl;
        cout<<"3.Update song"<<endl;
        cout<<"4.print all songs"<<endl;
        cout<<"5.Create backup"<<endl;
        cout<<"6.Exit"<<endl;
        
        cin>>a;
        if(a==1)
        {
            cout<<"Enter Song Name"<<endl;
            string p;
            cin>>p;
            f.addSong(p);
        }
        else if(a==2)
        {
            cout<<"Enter Index you want to delete"<<endl;
            int b;
            cin>>b;
            f.Delete_song(b);
        }
        else if(a==3)
        {
            cout<<"Enter Index you want to update"<<endl;
            int b;
            cin>>b;
            f.update_song(b);
        }
         else if(a==4)
        {
           f.print_song();
        }
         else if(a==5)
        {
           Favourite_songs a(f);
           f.print_song();
        }
         else
         {
         f.~Favourite_songs();
         }

    }
    
    return 0;
}