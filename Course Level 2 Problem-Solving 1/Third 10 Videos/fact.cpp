#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}
int main()
{
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    cout<<fact(n);
}
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    
    cout<<"Enter N"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;n--) 
    {
        fact*=n; 
    }
    cout<<fact;
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    
    cout<<"Enter N"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++) 
    {
        fact*=i; 
    }
    cout<<fact;
    return 0;
}
*/