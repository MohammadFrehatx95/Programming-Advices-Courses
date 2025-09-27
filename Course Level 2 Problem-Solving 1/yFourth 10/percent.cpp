#include <iostream>
using namespace std;
int main() 
{
    int totalSales;
    int per;
    cout<<"Enter Your Total Sales"<<endl;
    cin>>totalSales;
    
    if(totalSales == 1000000)
    {
       per=totalSales*0.01;
       
    }
    else if(totalSales>=500000 && totalSales<1000000)
    {
        per=totalSales*0.02;
    }
    else if(totalSales>=100000 && totalSales<=500000)
    {
        per=totalSales*0.03;
        
    }
    else if(totalSales>=50000 && totalSales<=100000)
    {
        per=totalSales*0.05;
    }
    else if(totalSales < 50000)
    {
        per=totalSales*0.00;
    }
    cout<<per; 
    return 0;
}