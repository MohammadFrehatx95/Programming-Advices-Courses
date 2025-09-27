#include <iostream>
using namespace std;
int main()
{
    int mark1,mark2,mark3;
    double avg;
    
    cout<<"Enter 3 marks"<<endl;
    cin>>mark1>>mark2>>mark3;
    
    avg = (mark1+mark2+mark3)/3.0;
    cout<<"****************"<<endl;
    if(avg >= 50)
    {
        cout<<avg<<endl;
        cout<<"Pass"<<endl;
    }
    else
    {
        cout<<avg<<endl;
        cout<<"Fail"<<endl;
    }
    return 0;
}