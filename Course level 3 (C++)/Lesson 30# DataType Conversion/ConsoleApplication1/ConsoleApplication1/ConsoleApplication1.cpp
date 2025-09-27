#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st1 = "43.22"; // convert to double,float,int
    int n1 = 20; // convert to string
    double n2 = 33.5; // convert to string
    float n3 = 55.23; // convert to string and integer

    cout << "**********************\n";

    double dbst1 = stod(st1);
    cout << "Double St1 = " << dbst1 << endl;

    float ftst1 = stof(st1);
    cout << "float St1 = " << ftst1 << endl; // convert double ,float ,int 
    
    int itst1 = stoi(st1);
    cout << "Int St1 = " << itst1 << endl;

    cout << "**********************\n";

    string n11 = to_string(n1); // convert int to string
    
    cout << "n11 int to string = " << n11 << endl;

    cout << "**********************\n";
    string n22 = to_string(n2); // convert double to string

    cout << "n22 double to string = " << n22 << endl;
    cout << "**********************\n";
    string n33 = to_string(n3); // convert float to string

    cout << "n33 float to string = " << n33 << endl;
    cout << "**********************\n";
    int n4;

    n4 = (int)n3;

    cout << "n4 float to int = " << n4 << endl;
    cout << "**********************\n";

}   

