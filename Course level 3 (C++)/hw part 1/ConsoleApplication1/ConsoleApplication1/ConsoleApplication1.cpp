#include <iostream>
#include <string>
using namespace std;

enum Status {Single,Married};

struct stOwner {
    string phone;
};
struct stAddress {
    string street1;
    stOwner Owner;
};
struct stInfo {
    string Name, City, Country;
    string Age;
    float monthlySalary, yearlySalary;
    char Gender;
    bool Married;
    stAddress Address;
   
};
int main()
{
    stInfo person1;
    Status myStatus;
    myStatus = Status::Married;

    cout << "Enter Your Name" << endl;
    getline(cin, person1.Name);

    cout << "Enter Your Age?\n";
    getline(cin, person1.Age);

    cout << "Enter Your City" << endl;
    cin >> person1.City;

    cout << "Enter Your Country?\n";
    cin >> person1.Country;

    cout << "Enter Your monthlySalary?\n";
    cin >> person1.monthlySalary;

    cout << "Enter Your yearlySalary?\n";
    cin >> person1.yearlySalary;

    cout << "Enter Your Gender M or F?\n";
    cin >> person1.Gender;

    cout << "Enter Your Street Name" << endl;
    cin >> person1.Address.street1;

    cout << "Enter Your Phone Number" << endl;
    cin >> person1.Address.Owner.phone;

   

    cout << "****************************\n";
    cout << "Name: " << person1.Name << endl;
    cout << "Age : "<< person1.Age << endl;
    cout << "City : " << person1.City << endl;
    cout << "Country : " << person1.Country << endl;
    cout << "monthlySal : " << person1.monthlySalary << endl;
    cout << "yearlySal : " << person1.yearlySalary << endl;
    cout << "Gender : " << person1.Gender << endl;
    cout << "isMarried : " << myStatus << endl;
    cout << "Street : " << person1.Address.street1 << endl;
    cout << "Phone : " << person1.Address.Owner.phone << endl;
    cout << "****************************\n";

}

