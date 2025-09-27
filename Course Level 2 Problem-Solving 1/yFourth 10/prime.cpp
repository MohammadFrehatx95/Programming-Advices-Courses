#include <iostream>
using namespace std;
int main()
{
    int num;
    int co=0;
    cout<<"Enter num"<<endl;
    cin>>num;
    
    for(int i=1;i<=num;i++) {// 1 2 3 4 5
    if(num % i == 0)
    {
      co++;
    }
    }
    if(co == 2)
    {
         cout<<"prime number"<<endl;
    }
    else
    {
         cout<<" not prime number"<<endl;
    }
    
    return 0;
}