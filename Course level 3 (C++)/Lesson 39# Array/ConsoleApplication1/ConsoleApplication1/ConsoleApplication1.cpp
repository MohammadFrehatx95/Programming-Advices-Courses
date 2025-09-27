#include <iostream>

using namespace std;

int main()
{
	float Grades[3];

	cout << "Enter Grade 1 To Find Average" << endl;
	cin >> Grades[0];
	cout << "Enter Grade 2 To Find Average" << endl;
	cin >> Grades[1];
	cout << "Enter Grade 3 To Find Average" << endl;
	cin >> Grades[2];

	cout << "The Average of Grades is: " << (Grades[0] + Grades[1] + Grades[2]) / 3.0;
}