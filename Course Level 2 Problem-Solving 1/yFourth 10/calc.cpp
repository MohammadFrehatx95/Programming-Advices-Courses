#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num1" << endl;
    cin >> num2;
    cout << "Enter Operation type" << endl;
    cin >> op;

    switch (op) {
    case '*':
        cout << "Num1*Num2= " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Num1/Num2= " << num1 / num2 << endl;
        break;
    case '+':
        cout << "Num1+Num2= " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Num1-Num2= " << num1 - num2 << endl;
        break;
    default:
    {
        cout << "Invaild Operation type";
        break;
    }
    }
}

