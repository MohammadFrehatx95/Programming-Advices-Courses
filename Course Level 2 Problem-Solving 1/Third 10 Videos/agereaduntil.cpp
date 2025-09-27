#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    bool result = (age>=18 && age<=45);
    
    if(result == true)
    {
        cout<<"Vaild age"<<endl;
        
    }
    else{
    while(result == false)
    { 
            cout<<"invaild age"<<endl;
            cin>>age; 
            result = (age>=18 && age<=45);
            if(result == true)
            {
                cout<<"Vaild age"<<endl;
                break;
            }
            
    }
}
}