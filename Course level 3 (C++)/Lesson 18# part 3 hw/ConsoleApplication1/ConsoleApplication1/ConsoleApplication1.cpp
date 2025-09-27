#include <iostream>
using namespace std;
int main()
{
    unsigned short age;

    cout << "Enter Your Age" << endl;
    cin >> age;

    age += 5;

    cout << "After 5 years you will be " << age << " years old.";
}
