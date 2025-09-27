#include <iostream>

using namespace std;

int x = 50; // bdl m3ak 3la tool live tb3 alprogram
void myFunction1() {
    int x = 20; // done when function done
    cout << "The Value of x inside function is: " << x << endl;
}
int main()
{
    int x = 10; // done when function done
    cout << "The local value of x inside main is: " << x << endl;
    myFunction1();
    cout << "The Global value of x is: " << ::x << endl;
    ::x = 30;
    cout << "The Global value of x after : " << ::x << endl;
}


