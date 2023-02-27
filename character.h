#ifndef CHARACTER_H
#define CHARACTER_H
#include <cstring>


using namespace std;

class Character		    // klase character									
{
public:							
   	Character(string, int);	// kontruktora metode
  	bool Hit(int);			// Hit metode						
	int GetLife();			// Metode dzives atgrieshanai
	void Go(char);			// Metode Go
	void PrintCharacter();	// Izdrukat datus
	~Character();			// destruktors

private:				// nepiecieshamie lauki										
	string name;
	int life;
	char path[10];
};

#endif
