/*
 * File:   SimpleHammer.cpp
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 *
 * Created on January 29, 2019, 1:48 PM
 */

#include "SimpleHammer.h"

double hit(double armor)
{
	double damage;
	
	if (armor < 30)                       // If armor < 30, the SimpleHammer does maximum      
		damage = hitPoints;           // damage (25). 
	else                                  // Else,
		damage = hitPoints - armor;   // the damage must take into consideration the opponent's armor.

	if (damage < 0)
		return 0;

	return damage;
}


