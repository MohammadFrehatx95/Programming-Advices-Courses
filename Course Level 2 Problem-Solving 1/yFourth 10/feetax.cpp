#include <iostream>
using namespace std;
int main()
{
    double totalBill; // fee 10% , tax 16%    1.1 1.6
    double fee=1.1,tax=1.16;
    cout<<"Enter totalBill"<<endl;
    cin>>totalBill;
    totalBill*=fee;
    totalBill*=tax;
    cout<<totalBill;
    
    

    return 0;
}