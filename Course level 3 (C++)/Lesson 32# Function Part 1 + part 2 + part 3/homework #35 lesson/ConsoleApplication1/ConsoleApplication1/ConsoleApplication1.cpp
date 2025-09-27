#include <iostream>

using namespace std;

void mySumProcedure() {
	int num1, num2;
	cout << "Please Enter Number1" << endl;
	cin >> num1;
	cout << "Please Enter Number2" << endl;
	cin >> num2;

	cout << "*********************" << endl;
	cout << num1 + num2 << endl;
}

int mySumFunction() {
	int num1, num2;
	cout << "Please Enter Number1" << endl;
	cin >> num1;
	cout << "Please Enter Number2" << endl;
	cin >> num2;

	cout << "*********************" << endl;
	return num1 + num2;

}

int main()
{
	cout << mySumFunction();

}

