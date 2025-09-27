#include <iostream>
using namespace std;
int main()
{
    double hours;
    double week,day;
    cout<<"Enter Hours to Calc Days and Weeks"<<endl;
    cin>>hours;
    
    week=hours/(24*7);
    day=hours/24;
    
    cout<<"Days = " << day<< endl;
    cout<<"Weeks = " << week;
    return 0;
}