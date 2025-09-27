#include <iostream>
using namespace std;
struct stAddress {
	string street1;
	string Pobox;

};
struct stOwner {
	string FullName;
	string Phone;
	stAddress address;
};
struct Car {
	string Brand;
	string Model;
	int year;
	stOwner Owner;
};
int main() // Structures group several related variables into one place
{
	Car myCar1,myCar2;
	myCar1.Brand = "BMW";
	myCar1.Model = "X5";
	myCar1.year = 2000;

	myCar2.Brand = "Ford";
	myCar2.Model = "Mustang";
	myCar2.year = 2022;

	myCar1.Owner.FullName = "Mohammed Abu-hadhoud";
	myCar1.Owner.Phone = "0779051343";

	myCar1.Owner.address.Pobox;

	cout << myCar1.Brand << " " << myCar1.Model << " " << myCar1.year << endl;
	cout << myCar1.Owner.FullName << " " << myCar1.Owner.Phone << endl;
}

