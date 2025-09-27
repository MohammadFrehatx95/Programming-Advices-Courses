#include <iostream>

using namespace std;

int main()
{
   float loanAmount;
   float loanMonth;

    cout << "Enter Your loan Amount" << endl;
    cin >> loanAmount;

    cout << "How many months you need to settle loan" << endl;
    cin >> loanMonth;

    loanMonth = loanAmount / loanMonth;

    cout << loanMonth;

}

