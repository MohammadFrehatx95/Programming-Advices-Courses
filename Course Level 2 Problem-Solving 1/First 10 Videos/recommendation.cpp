#include <iostream>
using namespace std;
int main()
{
int age;
bool license;
bool recommendation;

cout<<"Do you have recommendation ?";
cin >> recommendation;
cout<<"Enter Age && license (1:0)";
cin >> age >> license;

if ((age>21 && license==true) || (recommendation== true))
{
    cout<<"Welcome, Hired!";
}
else
{
    cout<<"Rejected";
}
}