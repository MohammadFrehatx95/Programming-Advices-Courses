#include <iostream>
using namespace std;

int main()
{
    int age;
    int license;
    
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Enter your license"<< endl;
    cin>>license; // 1 == true  |  0 == false 
    
    if(age > 21 && license == 1)
    {
        cout << "Hired" << endl;
    }
    else
    cout << "Rejected" << endl;
}