#include <iostream>
using namespace std;
int main()
{
    int mark;
    int temp;
 
    cout<<"Enter Mark"<<endl;
    cin>>mark; 
    
    for(int i=1; i<=2 ; i++)
    {
      cout<<"Enter Another 2 Marks"<<endl;
      cin>>temp;
      if (temp < mark)
     {
       temp=mark; // i want to make the max mark in temp
     }
    }
    cout<<"Max of 3 Number is: "<<temp<<endl;
    return 0;
}
/* another solution by me
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    cout<<"Enter A B C"<<endl;
    cin>>a>>b>>c;
    
    if((a>b) && (a>c))
    {
        cout<<a<<endl;
    }
    else if((a<b) && (b>c))
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    return 0;
}
*/