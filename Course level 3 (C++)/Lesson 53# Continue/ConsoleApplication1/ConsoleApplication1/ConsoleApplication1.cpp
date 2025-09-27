#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int num;

	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Num " << i + 1 << endl;
		cin >> num;

		if (num < 50)
		{
			sum += num;
		}
		else
		{
			continue;
		}
    }
	cout << "sum = " <<sum;
}

