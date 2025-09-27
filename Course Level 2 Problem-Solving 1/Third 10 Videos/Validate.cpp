#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    // 18 -- 45
    
   if(age>=18 && age<=45)
   {
       cout<<"Valid Age"<<endl;
   }
   else
   {
      cout<<"Invalid Age"<<endl;
   }
    return 0;
}