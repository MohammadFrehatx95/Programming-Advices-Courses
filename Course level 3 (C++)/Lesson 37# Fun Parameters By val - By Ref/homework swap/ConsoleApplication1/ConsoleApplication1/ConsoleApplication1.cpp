#include <iostream>

using namespace std;

void swap(int &x, int &y) {
	int temp = y;    
	y = x;  
	x = temp; 
}
int main()
{
	int x, y;

	cout << "Enter x value" << endl;
	cin >> x;

	cout << "Enter y value" << endl;
	cin >> y;

	swap(x, y);
	cout << " x = " << x << " " << "y = " << y;

}

