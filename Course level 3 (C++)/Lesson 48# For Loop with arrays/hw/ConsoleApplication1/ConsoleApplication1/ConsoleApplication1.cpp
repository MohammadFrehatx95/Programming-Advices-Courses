#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo& Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;

    cout << endl;
}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n**********************************\n";


}



void ReadPersonsInfo(strInfo Persons[100], int &numberOfPerson)
{
    cout << "Enter How Many Persons You Want" << endl;
    cin >> numberOfPerson;

    for (int i = 0; i <= numberOfPerson - 1; i++)
    {
        cout << "Enter Person " << i + 1 << " Info" << endl;
        ReadInfo(Persons[i]);
    }
}


void PrintPersonsInfo(strInfo Persons[100], int numberOfPerson)
{

    for (int i = 0; i <= numberOfPerson - 1; i++) // 2
    {
        cout << "\nPerson " << i + 1 << " Info: " << endl;
        PrintInfo(Persons[i]);
    }

}



int main()
{

    strInfo Persons[100];
    int numberOfPerson = 1;

    ReadPersonsInfo(Persons,numberOfPerson);
    PrintPersonsInfo(Persons, numberOfPerson);

    return 0;
}
