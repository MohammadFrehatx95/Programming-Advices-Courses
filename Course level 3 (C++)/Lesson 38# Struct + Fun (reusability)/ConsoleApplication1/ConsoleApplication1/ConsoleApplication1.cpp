#include <iostream>
#include <string>

using namespace std;

struct stInfo {
	string name, city, country,age;
	float monthlySalary, yearlySalary;
	char Gender;
	bool isMarried;
};

void readInfo(stInfo& info) {
	
	cout << "Enter Your Name" << endl;
	getline(cin, info.name);

	cout << "Enter Your Age" << endl;
	cin >> info.age;

	cout << "Enter Your City" << endl;
	cin >> info.city;

	cout << "Enter Your Country" << endl;
	cin >> info.country;

	cout << "Enter Your Monthly Salary" << endl;
	cin >> info.monthlySalary;

	cout << "Enter Your Yearly Salary" << endl;
	cin >> info.yearlySalary;

	cout << "Enter Your Gender M or F" << endl;
	cin >> info.Gender;

	cout << "Enter your MartialStatus (married or single) " << endl;
	cin >> info.isMarried;
}

void printInfo(stInfo info) {

	cout << "***************************" << endl;
	cout << "Name: " << info.name << endl;
	cout << "Age: " << info.age << endl;
	cout << "City: " << info.city << endl;
	cout << "Country: " << info.country << endl;
	cout << "Monthly Salary: " << info.monthlySalary << endl;
	cout << "Yearly Salary : " << info.yearlySalary << endl;
	cout << "Gender: " << info.Gender << endl;
	cout << "Marital Status : " << info.isMarried << endl;
	cout << "***************************" << endl;
}

int main()
{
	stInfo Person1;
	readInfo(Person1);
	printInfo(Person1);
}

