#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, city, country;
    string age;
    float monthlySalary, yearlySalary;
    char Gender;
    bool isMarried;

    cout << "Enter Your Name ?\n";
    getline(cin,name);
    cout << "Enter Your Age ?\n";
    getline(cin, age);
    cout << "Enter Your City ?\n";
    cin >> city;
    cout << "Enter Your Country ?\n";
    cin >> country;
    cout << "Enter Your monthlySalary ?\n";
    cin >> monthlySalary;
    cout << "Enter Your yearlySalary ?\n";
    cin >> yearlySalary;
    cout << "Enter Your Gender ?\n";
    cin >> Gender;
    cout << "Married or not ?\n";
    cin >> isMarried;

    cout << "***************************"<< endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "yearlySalary: " << yearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "***************************" << endl;
}

