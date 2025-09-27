#include <iostream>
using namespace std;
int main()
{
   double a;
   double b;
   double area;
   double PI=3.14;
   
   cout<<"Enter A"<<endl; // for example 20 10
   cin>>a;
   cout<<"Enter b"<<endl;
   cin>>b;

   area=(PI*b*b/4)*((2*a-b)/(2*a+b));
   
   cout<<"circle area in an isoscles trinagle = " << area << endl;

    return 0;
}