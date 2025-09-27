#include <iostream>
using namespace std;

enum Color {Red,Green,Yellow,Blue}; // you can give values red = 100
enum Direction {North,South,East,West};
enum Week {Sat,Sun,Mon,Tue,Wed,Thu,Fri};
enum Gender {Male,Female};
enum Status{Single,Married};


int main()
{
	Color myColor;
	Direction myDirection;
	Week Today;
	Status myStatus;

	myColor = Color::Blue;
	myDirection = Direction::South;
	Today = Week::Wed;
	myStatus = Status::Single;

	cout << myColor << endl;
	cout << myDirection << endl;
	cout << Today << endl;
	cout << myStatus << endl;
}

