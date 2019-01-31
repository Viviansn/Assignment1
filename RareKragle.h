/*
 * File:   RareKragle.h
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 * 
 * Created on January 30, 2019, 2:59 PM
 */

#ifndef RAREKRAGLE_H
#define RAREKRAGLE_H

#include "Weapon.h"
#include <string>

/*
   Defines the behavior of a Rare Kragle, which is an ALL OR NOTHING WEAPON.
   (hitPoints = 100,000. It ignores all the armor points UNLESS the armor is
   greater than or equal to 100,000. If armor >= 100,000, then the damage is 0.
*/

class RareKragle : public Weapon
{
public:
	RareKragle() : Weapon("Rare Kragle", 100,000.0) {}

	virtual ~RareKragle() {};

	virtual double hit(double armor);

};

#endif
