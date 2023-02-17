#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float weight, height, bmi;
	
	cout << "Enter your weight (kg): ";
	cin >> weight;
	
	cout << "Enter your height (m): ";
	cin >> height;
	
	bmi = weight / (height * height);
	
	cout << "Your BMI is " <<setprecision(5)<<bmi << endl;
	
	return 0;
}