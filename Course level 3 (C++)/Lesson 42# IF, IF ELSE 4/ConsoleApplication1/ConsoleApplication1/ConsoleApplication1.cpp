#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;

    if (age > 15 && age < 45)
    {
        cout << "Valid Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }
}

