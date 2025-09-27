#include <iostream>
using namespace std;
int main()
{
   double days,hrs,min,sec;
   double total=0;
   cout<<"Enter days"<<endl;
   cin>>days; 
   
   cout<<"Enter hrs"<<endl;
   cin>>hrs;
   
   cout<<"Enter min"<<endl;
   cin>>min;
   
   cout<<"Enter sec"<<endl;
   cin>>sec;
    
   min*=60;
   hrs*=60*60;
   days*=24*60*60;
   total+=min+days+sec+hrs;
   
   cout<<"total sec time duration =  "<<total<<endl;
   
    return 0;
}