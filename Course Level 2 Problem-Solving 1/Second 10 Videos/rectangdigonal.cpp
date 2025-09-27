#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,d;
    cout<<"Enter A and D"<<endl;
    cin>>a>>d;
    
    double area;
    area=a*sqrt(d*d-a*a);  // 15 * (10-15) -5
    cout<<"Area = "<<area<<endl;
    return 0;
}