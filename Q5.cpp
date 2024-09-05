/*For the following scenario, create a class that has the appropriate variables and functions. You’re also required to
create appropriate constructors, a destructor, getters and setters for your class.
Inside your main function, you have to create 3 objects. One declared without using a parameterized constructor,
while the other is created with a parameterized constructor. The third one should be initialized by copying object
1 or 2 to it.
Suppose you’re writing an application that can be used as a plugin for different games that require dice rolls. Let’s
assume for simplicity’s sake that you roll two six-sided dice, at user’s command. All users share the data of the
rolled dice, but can roll their dice by themselves. Similarly, a user can reroll their dice as well, but the same dice
value of the roll will be shared with other users to avoid any cheating!
This is a small scenario, but all your concepts will be applied here (minus const)*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class rolldice {
	string playername;
	
	static int dice1;
	static int dice2;
	int a[4];
public:
	rolldice(string name) :playername(name) { }
	rolldice() {  }
	void roll_dice() {
		srand(time(0));
		a[0] = rand() % 6 + 1;
		a[1] = rand() % 6 + 1;
		a[2] = rand() % 6 + 1;
		a[3] = rand() % 6 + 1;
		
		dice1 = a[rand()%2];
		dice2 = a[rand()%2];
		
		
		
		
	}
	int get_dice1() {
		return dice1;
	}
	int get_dice2() {
		return dice2;
	}

};
int rolldice::dice1;
int rolldice::dice2;

int main()
{
	rolldice r1;
	rolldice r2("Atif");
	r1.roll_dice();
	r2.roll_dice();
	cout << r1.get_dice1() << endl;
	cout << r1.get_dice2()<<endl;
	cout << r2.get_dice1()<<endl;
	cout << r2.get_dice2();
}
