#include <iostream>
using namespace std;
int main()
{
    int mark;
    
    cout<<"Enter Your Mark"<<endl;
    cin>>mark;
    
    if(mark >= 50)
    {
        cout<<"Passed"<<endl;
    }
    else
    {
        cout<<"Failed"<<endl;
    }
    return 0;
}