#include <iostream>

using namespace std;

void readArrayGrades(float Grades[3]) {
    
	cout << "Enter Grade1 " << endl;
	cin >> Grades[0];

	cout << "Enter Grade2 " << endl;
	cin >> Grades[1];

	cout << "Enter Grade3 " << endl;
	cin >> Grades[2];

	cout << "*************************" << endl;
}

float calculateArrayAvg(float Grades[3]) {
	

	float result = Grades[0] + Grades[1] + Grades[2];

	result = result / 3.0;

	return result;
}

int main()
{
	float Grades[3];

	readArrayGrades(Grades);

	cout <<"Avg = " << calculateArrayAvg(Grades);

}

