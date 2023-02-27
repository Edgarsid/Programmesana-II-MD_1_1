#include <iostream>
#include <string>
#include "character.h"

using namespace std;

int main()
{
	
	Character c1 ("Anakin", 10);  // izsauc kontruktoru pirmajam personazham
	
	//  Personazham 10 dzives, un vairak par 10 gajieniem, personazhs izdzivo
	
	c1.GetLife();
	c1.Hit(1);
	c1.Go('l');
	c1.Go('r');
	c1.Go('l');
	c1.Go('b');
	c1.Hit(1);
	c1.Go('t');
	c1.Go('l');
	c1.Go('r');
	c1.Go('b');
	c1.Go('l');
	c1.Go('t');
	c1.Go('t');
	c1.Go('t');
	c1.Hit(4);
	c1.Go('t');
	c1.Go('t');
	c1.PrintCharacter();   // izdrukaa datus


	Character c2 ("Darth Vader", 5);   // izsauc konstruktoru otrajam personazham
	
	// personazham 5 dzives, mazak par 10 gajieniem. Personazhs nomirsgt
	
	c2.GetLife();
	c2.Hit(1);
	c2.Go('l');
	c2.Go('r');
	c2.Go('l');
	c2.Go('b');
	c2.Go('t');
	c2.Go('t');
	c2.Hit(5);
	c2.Hit(1);   // velreiz izsauc Hit
	c2.Go('t');  // velreiz izsauc Go
	
	// Velreiz izsaucot Hit un Go nekas nenotiek, bet metodee var ierakstiit, lai izdrukaa, piemeeram:  "Character already dead"
	
	c2.PrintCharacter();  // izdrukaa datus
	
	system("pause");
	return 0;
}
