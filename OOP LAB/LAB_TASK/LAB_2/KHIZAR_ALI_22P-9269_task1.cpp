#include <iostream>
#include <string>
using namespace std;

// Function to check if the password fulfils the requirements
bool isValidPassword(string password)
{
	// Password must be 8 characters long
	if (password.length() <= 8)
	{
		return false;
	}
	// Password must contain at least one special symbol
	bool hasSpecialChar = false;
	int a=password.length();
	for (int i=0;i<a;i++)
	{
		if (password[i] == '%' || password[i] == '!' || password[i] == '*' || password[i] == '^' || password[i] == '&'|| password[i] == '@') 
		{
			hasSpecialChar = true;
			break;
		}
	}
	
	if (hasSpecialChar==0)
	{
		return false;
	}
	
	return true;
}

int main() {
	cout << "Enter your name: ";
	string name;
	getline(cin, name);

	cout << "Enter your password: ";
	string password;
	getline(cin, password);
	
	while (!isValidPassword(password))
	{
		cout << "Your password does not meet the requirements." << endl;
		cout << "Enter a valid password: ";
		getline(cin, password);
	}
	
	cout << "Enter your password again: ";
	string password2;
	getline(cin, password2);
	
	if (password == password2)
	{
		cout << "You know what? You are  a great programmer. Keep Coding!" << endl;
	}
	else
	cout<< "Wrong password Enter again "<<endl;

	return 0;
}