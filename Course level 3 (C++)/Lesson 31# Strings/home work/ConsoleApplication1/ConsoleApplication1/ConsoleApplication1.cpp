#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2, s3;
	cout << "Please Enter String 1?\n";
	getline(cin, s1);

	cout << "Please Enter String 2?\n";
	cin >> s2;

    cout << "Please Enter String 3?\n";
	cin >> s3;

	cout << "**********************" << endl;

	cout << "The length of string1 is: " << s1.length() << endl;

	cout << "Characters at 0,2,4,7 are: " << s1[0] << " " <<  s1[2] << " " << s1[4] << " " << s1[7] << endl;

	cout << "Concatenating String2 with String3 = " << s2 + s3 << endl;

	cout <<"5 * 10 = " << stoi(s2) * stoi(s3);
}


