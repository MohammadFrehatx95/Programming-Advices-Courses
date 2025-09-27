#include <iostream>
using namespace std;
int main()
{
	string name="Mohammed Abu-Hadhoud.";
	unsigned short int Age = 44;
	string city = "Amman.";
	string country = "Jordan.";
	float monthlySalary = 5000;
	char Gender = 'M';
	bool isMarried = true;

	cout << "*********************************\n";
	cout << "Name:" << name << endl;
	cout << "Age:" << Age <<" Years." << endl;
	cout << "City:" << city << endl;
	cout << "Country:" << country << endl;
	cout << "Monthly Salary:" << monthlySalary << endl;
	cout << "Yearly Salary:" << monthlySalary * 12 << endl;
	cout << "Gender:" << Gender << endl;
	cout << "Married:" << isMarried << endl;
	cout << "*********************************\n";
}