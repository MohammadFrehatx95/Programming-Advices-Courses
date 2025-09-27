#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	int searchArray = 20;

	for (int i = 0; i < 10; i++)
	{
		cout << "Iteration " << i + 1 << endl;
		if (searchArray == arr[i])
		{
			cout << arr[i] << " Found At Postion " << i;
			break;
		}
	}
} 

