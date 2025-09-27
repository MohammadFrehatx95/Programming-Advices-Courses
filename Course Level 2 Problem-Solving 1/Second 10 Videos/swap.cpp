#include <iostream>
using namespace std;
int main()
{
    int x,y;
    int temp;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    
    temp=y;//4         
    y=x;  //5                  
    x=temp;//4
    
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
void swap(int x,int y)
{
    int temp;
    temp=y;//4         
    y=x;  //5                  
    x=temp;//4
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
}
int main()
{
    int x,y;
    int temp;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    swap(x,y);
    return 0;
}
*/