#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the myString is: " << myString.length() << endl;

    cout << myString[6] << endl; // print G

    string s1 = "10", s2 = "20";

    string s3 = s1 + s2; // 1020
    cout << s3 << endl;
    
    int sum = stoi(s1) + stoi(s2);
    cout << sum << endl;
}
