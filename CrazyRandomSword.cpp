/*
 * File:   CrazyRandomSword.cpp
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 *
 * Created on January 29, 2019, 10:15 PM
 */

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", 0.0)
{
	srand( time(0) );
	hitPoints = rand() % 94 + 7;     // Initializing hitPoints with a random integer from 7 to 100.
}

double CrazyRandomSword::hit(double armor)
{
	double origHitPoints = hitPoints;  // Making a copy of the original hitPoints value (used in this function)
	
	hitPoints = rand() % 94 + 7;    // Changing the value of hitPoints for when this function is called again next time
	
	if (armor < 6)            // Note that armor must be at least 6 because CRS ignores a random
	{                         // integer from 2 to armor/3. So, this range assumes armor is at least 9 (in order to have
		return origHitPoints;        // (...) a range from at least 2-3. These two if-statements are checks to 
	}                                    // (...) include what happens if armor < 9.
	
	if (armor >= 6 && armor <= 8)
		return (origHitPoints - (armor-2));  // Why this if statement? See definition of variables armorMax and damageIgnored in below lines.
                                                // In damageIgnored's definition, it uses rand() % armorMax,  so armorMax cannot be 0 or else
						// get an error. So, if armor is 6,7,or 8, it results in armorMax being 0. 
						// This if-statement avoids that happening.


	int armorMax = armor/3 - 2;             // Subtract 2 because we will add 2 when using rand() to get range beginning at 2.
	int damageIgnored = rand() % armorMax + 2;    
	double damage = origHitPoints - (armor - damageIgnored);  

	if (damage < 0)
		return 0;

	return damage;
}

