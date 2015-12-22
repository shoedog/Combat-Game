/****************************************************************************************
 * Program Filename: reptilian.cpp
 * Author: Wesley Jinks
 * Date: Feb. 13th, 2015
 * Description: Reptilian class implementation file 
 * Input: None
 * Output: None
 * *************************************************************************************/

#include "character.hpp"
#include "reptilian.hpp"

Reptilian::Reptilian( Dice *pDie6 = NULL )
	: Character( "Reptilian", 18, 7, 0, 0 ),
	die6(*pDie6)
{
}

void Reptilian::attackRoll()
{
	this->attack = die6.rollDice() + die6.rollDice() + die6.rollDice();;
}

void Reptilian::defenseRoll()
{
	this->defense = die6.rollDice();
}

/******************************************************************************
 *  Function: resetStrength
 *  Description: resets Strength to starting value
 *  Parameters: none
 *  Pre-Conditions: none
 *  Post-Conditions: strength is set to the starting value of the character*
 * ***************************************************************************/
void Reptilian::resetStrength()
{
	this->strength = 18;
}
