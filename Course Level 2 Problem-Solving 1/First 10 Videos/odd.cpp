#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int result;
    
    cout<< "Enter num " << endl;
    cin>>num;
    result = num % 2;
    if (result == 0)
    {
        cout<<"the number is even";
    }
    else
        cout<<"the number is odd";
}