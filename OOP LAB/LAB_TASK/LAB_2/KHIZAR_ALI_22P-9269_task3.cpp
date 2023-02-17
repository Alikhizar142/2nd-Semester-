#include <iostream>
#include <string>
using namespace std;

const int max_room_per_floor = 5;
const int max_floor = 4;

int floor_room[max_floor][max_room_per_floor];
int floor_price[max_floor][max_room_per_floor];

// Initializing the rooms and the prices
void initialize(){
	for(int i = 0; i < max_floor; i++)
	{
		for(int j = 0; j < max_room_per_floor; j++)
		{
			if(i < 2)
			{
				floor_room[i][j] = 0;
				floor_price[i][j] = 10000;
			}
			else
			{
				floor_room[i][j] = 0;
				floor_price[i][j] = 6000;
			}
		}
	}
	cout << "Rooms and prices initialized" << endl;
}

// Showing the available rooms
void show_available_rooms()
{
	for(int i = 0; i < max_floor; i++)
	{
		for(int j = 0; j < max_room_per_floor; j++)
		{
			if(floor_room[i][j] == 0)
			{
				cout <<"- ";
			}
			else
				cout <<"* ";
		}
			cout <<endl;
	}
}


void book_room(){
	int floor, room, days;
	cout << "Enter the floor(0-4) and the room number(0-5): ";
	cin >> floor >> room;


	if(floor >= max_floor || room >= max_room_per_floor){
		cout << "Invalid floor or room number" << endl;
		return;
	}


	if(floor_room[floor][room] == 1){
		cout << "The room is already occupied" << endl;
		return;
	}


	cout << "Enter the number of days: ";
	cin >> days;


	int total_price = floor_price[floor][room] * days;


	floor_room[floor][room] = 1;

	cout << "Floor: " << floor << ", Room: " << room << " successfully booked" << endl;
	cout << "Your total cost for " << days << " days is " << total_price << " RS" << endl;
}

int main(){
	// Initialize the rooms and the prices
	initialize();

	int choice;

	cout << "****************Hotel Managment System************* " << endl;
	cout << "Choose what you want to do: " << endl;
	cout << "1. Book a room" << endl;
	cout << "2. Show available rooms" << endl;
	cout << "3. Exit the program" << endl;
	cout << "Choice: ";
	cin >> choice;

	while(choice != 3)
	{
		if(choice == 1)
         { 
			book_room();
		}
		else if(choice == 2){
		
			show_available_rooms();
		}
		else
		{
			cout << "Invalid choice" << endl;
		}
		cout << "****************Hotel Managment System************* " << endl;
		cout << "Choose what you want to do: " << endl;
		cout << "1. Book a room" << endl;
		cout << "2. Show available rooms" << endl;
		cout << "3. Exit the program" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	return 0;
}