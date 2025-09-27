#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    
    cout<<"Enter num1 + num 2"<<endl;
    cin>>num1>>num2;
    
    if(num1 > num2)
    {
        cout<<"Max of 2 number is: "<<num1<<endl;
    }
    else if(num2 > num1)
    {
        cout<<"Max of 2 number is: "<<num2<<endl;
    }
    else
    {
        cout<<"Equals"<<endl;
    }
}