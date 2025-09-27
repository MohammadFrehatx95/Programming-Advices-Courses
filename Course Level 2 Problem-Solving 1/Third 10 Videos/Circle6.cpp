#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double area;
    double PI;
    
    cout<<"Enter A B C"<<endl;
    cin>>a>>b>>c;
    
    PI=3.14;
    double p=(a+b+c)/2;
    double t=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    t=t*t;
    area= PI*t;
    
    cout<<"circle around arbitary triangle = "<<area<<endl;
    return 0;
}