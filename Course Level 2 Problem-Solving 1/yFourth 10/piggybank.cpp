#include <iostream>
using namespace std;
int main()
{
    double penny,nickel,dime,quarter;
    double dollar;
    double totalPennies;
    
    cout<<"Enter Pennis"<<endl;
    cin>>penny;  // 5 0.01
    
    cout<<"Enter Nickels"<<endl;
    cin>>nickel; // 5 ---) 25 0.05  /0.2 = 25
    
    cout<<"Enter Dimes"<<endl;
    cin>>dime; // 5 ---) 50 0.10 /0.1
    
    cout<<"Enter Quarters"<<endl;
    cin>>quarter; // 5 ---) 625 0.25 /0.008
    
    cout<<"Enter Dollars"<<endl; // 5 5 5 5 5 
    cin>>dollar;  
    totalPennies=quarter/0.008;
    totalPennies=totalPennies+penny+(nickel/0.2)+(dime/0.1);
    cout<<"totalPennies = "<<totalPennies<<endl;
    penny=penny*0.01; // 0.05
    quarter=quarter*0.25;//1.25
    dime=dime*0.10; // 0.5
    nickel=nickel*0.05;//0.25
    dollar=dollar+quarter+dime+penny+nickel;
    cout<<"Dollar = "<<dollar<<endl;

    return 0;
}

/*
They are all sub-units of a dollar.

100 pennies = $1

1 nickel = 5 pennies = 1/20 dollar

1 dime = 10 pennies or 2 nickels = 1/10 dollar

1 quarter = 25 pennies or 5 nickels = 1/4 dollar

1 penny = $0.01

1 nickel = $0.05

1 dime = $0.10

1 quarter = $0.25 

*/

/*#include <iostream>
using namespace std;

int main()
{
    int pennies, nickels, dimes, quarters, dollars;
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickles: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << "Enter the number of dollars: ";
    cin >> dollars;
    cout << endl;

    float totalPennies = pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
    float totalDollars = totalPennies / 100;
    
    cout << "All Pennies you are have are: " << totalPennies << endl;
    cout << "All Dollars you are have are: " << totalDollars << endl;
    
}
*/


