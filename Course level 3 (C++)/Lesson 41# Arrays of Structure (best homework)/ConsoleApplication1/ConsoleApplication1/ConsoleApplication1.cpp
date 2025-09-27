#include <iostream>

using namespace std;

struct stInfo {
	string FirstName;
	string LastName;
	int Age;
	string phone;
};

void readInfoP1(stInfo Person[2]) {

	cout << "Enter Your First Name?" << endl;
	cin >> Person[0].FirstName;

	cout << "Enter Your Last Name?" << endl;
	cin >> Person[0].LastName;

	cout << "Enter Your Age?" << endl;
	cin >> Person[0].Age;

	cout << "Enter Your Phone?" << endl;
	cin >> Person[0].phone;

}

void readInfoP2(stInfo Person[2]) {

	cout << "****************************" << endl;

	cout << "Enter First Name for Person 2?" << endl;
	cin >> Person[1].FirstName;

	cout << "Enter Your Last Name?" << endl;
	cin >> Person[1].LastName;

	cout << "Enter Your Age?" << endl;
	cin >> Person[1].Age;

	cout << "Enter Your Phone?" << endl;
	cin >> Person[1].phone;

}

void printInfoP1(stInfo Person[2])
{
	cout << "****************************" << endl;
	cout << "FirstName : " << Person[0].FirstName << endl;
	cout << "LastName : " << Person[0].LastName << endl;
	cout << "Age : " << Person[0].Age <<" Years." << endl;
	cout << "Phone : " << Person[0].phone << endl;
	cout << "****************************" << endl;
}

void printInfoP2(stInfo Person[2])
{
	cout << "****************************" << endl;
	cout << "FirstName : " << Person[1].FirstName << endl;
	cout << "LastName : " << Person[1].LastName << endl;
	cout << "Age : " << Person[1].Age << " Years." << endl;
	cout << "Phone : " << Person[1].phone << endl;
	cout << "****************************" << endl;
}


int main()
{
	stInfo Person[2];
	readInfoP1(Person);
	readInfoP2(Person);
	printInfoP1(Person);
	printInfoP2(Person);
}

