#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int p=1;
    cout<<"Enter n"<<endl; //2  4
    cin>>n;
    cout<<"Enter m"<<endl; //4  4
    cin>>m;
    
    for(int i=0;i<m;i++) // 0 1 2 3 (4 times)
    {
       p*=n; 
    }
    cout<<p;
}  