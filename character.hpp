/****************************************************************************************
 * Program Filename: character.hpp
 * Author: Wesley Jinks
 * Date: Feb. 13th, 2015
 * Description: Character class specification/header file 
 * Input: None
 * Output: None
 * *************************************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "dice.hpp"

using std::cout;

class Character
{
	
	protected:
		//Dice dieSix1;
		//Dice dieSix2;
		//Dice dieSix3;
		//TenSidedDice dieTen1;
		//TenSidedDice dieTen2;
		//Dice *die6;
		//Dice *die10;
		int strength;
		int armor;
		int attack;
		int defense;
		int damageTaken;
		int winCounter;
		std::string name;

	public:
		Character( std::string name, int str, int arm, int def, int att );
		virtual void attackRoll() = 0;
		virtual void defenseRoll() = 0;
		virtual void battle( Character & );
		virtual void resetStrength() = 0;
		void incrementWinCounter( Character & );
		int getWinCounter() const;
		int getStrength() const;
		int getArmor() const;
		int getDefense() const;
		int getAttack() const;
		std::string getName() const;
		void setStrength( int num );
		virtual void setDamageTaken( int oppAttack );
	//	friend std::ostream &operator<<( std::ostream &out, Character );
};
#endif
