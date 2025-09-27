#include <iostream>

using namespace std;

int main()
{
	int Age;
	bool driverLicense;

	cout << "Enter Your Age" << endl;
	cin >> Age;

	cout << "Do you have a Driver License?" << endl;
	cin >> driverLicense;

	if (Age > 21 && driverLicense == true)
	{
		cout << "Hired" << endl;
	}
	else
	{
		cout<<"Rejected" << endl;
	}

}

