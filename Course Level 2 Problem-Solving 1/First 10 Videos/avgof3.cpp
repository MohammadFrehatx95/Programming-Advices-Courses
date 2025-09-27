#include <iostream>
using namespace std;
int main()
{
    int mark1,mark2,mark3;
    double avg;
    
    cout<<"Enter 3 Marks"<<endl;
    cin>>mark1>>mark2>>mark3;
    
    avg = (mark1+mark2+mark3)/3.0;
    cout<<"Avg of 3 Marks = "<<avg<<endl;
    

    return 0;
}