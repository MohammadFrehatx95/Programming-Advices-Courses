#include <iostream>
using namespace std;

int main()
{
    int l;
    double area;
    double PI;
    
    cout<<"Enter l"<<endl;
    cin>>l;
    
    PI=3.14;
    area=l*l/(4*PI);
    
    cout<<"Circle area along the circumference = "<<area<<endl;
    return 0;
}