#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout<<"Enter Numbers"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i=i+2) // 1 3 5 7 9
    {
        sum=sum+i;
    }
    cout<<"sum of odd = "<<sum<<endl;
    return 0;
} /* #include <iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout<<"Enter Numbers"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++) // 1 3 5 7 9
    {
        if(i % 2 != 0)
        {
          sum=sum+i;
        }
    }
    cout<<"sum of odd = "<<sum<<endl;
    return 0;
}
*/