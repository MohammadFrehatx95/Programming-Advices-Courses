#include <iostream>
using namespace std;

enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };

int main()
{
    cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";

    int c;
    enCountryChoice Coutnry;

    cin >> c;
    Coutnry = (enCountryChoice)c;

    switch (Coutnry)
    {
    case enCountryChoice::Jordan:
        cout << "Your country is Jordan\n";
        break;

    case enCountryChoice::Tunisa:
        cout << "Your country is Tunisa\n";
        break;

    case enCountryChoice::Algeria:
        cout << "Your country is Algeria\n";
        break;


    case enCountryChoice::Oman:
        cout << "Your country is Oman\n";
        break;

    case enCountryChoice::Egypt:
        cout << "Your country is Egypt\n";
        break;

    case enCountryChoice::Iraq:
        cout << "Your country is Iraq\n";
        break;

    default:
    {
        cout << "Your country is Other\n";
    };

    return 0;
    }
}
