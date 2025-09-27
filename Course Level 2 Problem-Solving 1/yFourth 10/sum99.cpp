#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    
    cout<<"Enter Number"<<endl;
    cin>>num;
    
    while(num != -99)
    {
        sum+=num; 
        cin>>num;
    }
    
    cout<<"sum = "<<sum;

    return 0;
}