/****************************************************************************************
 * Program Filename: ex3.cpp
 * Author: Wesley Jinks
 * Date: Feb. 13th, 2015
 * Description: Main program file 
 * Input: None
 * Output: None
 * *************************************************************************************/
#include<iostream>
#include "character.hpp"
#include "barbarian.hpp"
#include "reptilian.hpp"
#include "blueMen.hpp"
#include "goblin.hpp"
#include "shadow.hpp"

using std::cout;

//void battle( Character &, Character & );

int main()
{
	Dice dieSix(6);
	Dice dieTen(10);
	Barbarian conan( &dieSix );;
	Barbarian Thor( &dieSix );;
	Reptilian QueenElizabeth( &dieSix );
	Reptilian Thoth( &dieSix );
	BlueMen Man1( &dieSix, &dieTen );
	BlueMen Man2( &dieSix, &dieTen );
	Goblin Goblin1( &dieSix );
	Goblin Goblin2( &dieSix );
	Shadow TheShadow1( &dieSix, &dieTen );
	Shadow TheShadow2( &dieSix, &dieTen );

//	for( int i = 0; i < 10000000; i++ )
	{
		cout << "Barbarian vs Barbarian: \n";
		conan.battle( Thor );
		cout << "\n Barbarian vs Reptilian: \n";
		conan.battle( QueenElizabeth );
		cout << "\n Barbarian vs Blue Man: \n";
		conan.battle( Man1 );
		cout << "\n Barbarian vs Goblin: \n";
		conan.battle( Goblin1 );
		cout << "\n Barbarian vs Shadow: \n";
		conan.battle( TheShadow1 );
		cout << "\n Reptilian vs Reptilian: \n";
		QueenElizabeth.battle( Thoth );
		cout << "\n Reptilian vs Blue Man: \n";
		QueenElizabeth.battle( Man1 );
		cout << "\n Reptilian vs Goblin: \n";
		QueenElizabeth.battle( Goblin1 );
		cout << "\n Reptilian vs Shadow: \n";
		QueenElizabeth.battle( TheShadow1 );
		cout << "\n Blue Man vs Blue Man: \n";
		Man1.battle( Man2 );
		cout << "\n Blue Man vs Goblin: \n";
		Man1.battle( Goblin1 );
		cout << "\n Blue man vs Shadow: \n";
		Man1.battle( TheShadow1 );
		cout << "\n Goblin vs Goblin: \n";
		Goblin1.battle( Goblin2 );
		cout << "\n Goblin vs Shadow: \n";
	 	Goblin1.battle( TheShadow1 );
		cout << "\n Shadow vs Shadow: \n";
		TheShadow1.battle( TheShadow2 );	
	}

//	std::cout << "Conan wins: " << conan.getWinCounter() << "\n";
//	std::cout << "Thor wins: " << Thor.getWinCounter() << "\n";
//	std::cout << "Queen Elizabeth wins: " << QueenElizabeth.getWinCounter() << "\n";
//	std::cout << "Thoth: " << Thoth.getWinCounter() << "\n";
//	std::cout << "Blue Man: " << Man1.getWinCounter() << "\n";
//	std::cout << "Goblin: " << Goblin1.getWinCounter() << "\n";
//	std::cout << "Shadow: " << TheShadow1.getWinCounter() << "\n";
	return 0;
}

/*
void battle( Character &p1, Character &p2 )
{
	bool turn;
	int damage;
	srand( time(NULL) );
	
	turn = rand() % 2;

	while( !(p1.getStrength() <= 0) && !(p2.getStrength() <= 0) )
	{
		if( turn == 0 )
		{
			p2.defenseRoll();
			p1.attackRoll();
			damage = ( p1.getAttack() - p2.getDefense() - p2.getArmor() );
			p2.setDamageTaken( damage );
		//	turn = 1;
			cout << "p1 attack: " << p1.getAttack() << " P2 Defense: " << p2.getDefense() << "  P2 strength: " << p2.getStrength() << "\n";
		}
		else if( turn == 1 )
		{
			p1.defenseRoll();
			p2.attackRoll();
			damage = ( p2.getAttack() - p1.getDefense() -p1.getArmor() );
			p1.setDamageTaken( damage );
		//	turn = 0;
			cout << "p2 attack: " << p2.getAttack() << " P1 Defense: " << p1.getDefense() << " P1 strength: " << p1.getStrength() << "\n";
		}

		if( turn == 0 )
			turn = 1;
		else if( turn == 1)
			turn = 0;
	}
	
	if( p1.getStrength() <= 0 )
		cout << "Player 2 won \n ";
	else if( p2.getStrength() <= 0 )
		cout << "Player 1 won \n";

}
*/
