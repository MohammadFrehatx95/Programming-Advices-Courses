#include <iostream>

using namespace std;

int main()
{
    int mark1, mark2, mark3;

    cout << "Enter Mark 1" << endl;
    cin >> mark1;

    cout << "Enter Mark 2" << endl;
    cin >> mark2;

    cout << "Enter Mark 3" << endl;
    cin >> mark3;

    float avg = (mark1 + mark2 + mark3) / 3.0;

    if (avg >= 50)
    {
        cout << avg << endl;
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

