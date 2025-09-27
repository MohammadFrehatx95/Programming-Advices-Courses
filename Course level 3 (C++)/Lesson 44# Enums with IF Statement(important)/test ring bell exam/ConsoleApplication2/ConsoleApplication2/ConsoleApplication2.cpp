#include <iostream>

using namespace std;

enum enRingBell {bell=1};
int main()
{
    enRingBell ring;
    int choice;

    
    cout << "**********************" << endl;
    cout << "(1) to Ring The Bell" << endl;
    cout << "**********************" << endl;

    cin >> choice;

    ring = (enRingBell)choice;

    if (ring == enRingBell::bell)
    {
        cout << "\a";
    }

}

