#include <iostream>
using namespace std;
int main()
{
    int d;
    double area;
    double PI;
    
     cout<<"Enter D"<<endl; // circle area through diameter
     cin>>d;
     
     PI=3.14;
     area = ((PI*d*d) / 4 );
     
     cout<<"circle area through diameter = "<<area<<endl;
    return 0;
}