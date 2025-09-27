#include <iostream>
using namespace std;

int main()
{
    int seconds;

    cout << "Enter number of seconds: ";
    cin >> seconds;
   

    int secondsPerday = 24 * 60 * 60;
    int secondPerHours = 60 * 60;
    int secondPerMinutes = 60;

    int days = seconds / secondsPerday ;
    int remainder = seconds % secondsPerday;

    int hours = remainder / secondPerHours;
    int remainder2 = remainder % secondPerHours;

    int minutes = remainder2 / secondPerMinutes;
    int remainder3 = remainder2 % secondPerMinutes;

    cout << "Time is: " << days << ":" << hours << ":" << minutes << ":" << remainder3;
}

