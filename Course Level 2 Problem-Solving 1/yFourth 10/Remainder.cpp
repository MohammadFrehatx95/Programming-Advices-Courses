#include <iostream>
using namespace std;
int main()
{
    int totalBill,cashPaid;
    int remain;
    
    cout<<"Enter totalBill"<<endl; 
    cin>>totalBill;
    
    cout<<"Enter cashPaid"<<endl; 
    cin>>cashPaid;
    
    remain=cashPaid-totalBill;
    cout<<"Remainder is = "<<remain<<endl;
    return 0;
}