/*
 * File:   CrazyRandomSword.h
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 *
 * Created on January 29, 2019, 2:29 PM
 */

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include "Weapon.h"
#include <string>

/*
   Defines the behavior of a crazy random sword (hitpoint = a random integer 
   between 7 and 100. It ignores a random amount of integer armor points, ranging
   from 2 to 1/3 of the armor the weapon hits.
*/

class CrazyRandomSword : public Weapon
{
public:
	CrazyRandomSword();

	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);
};

#endif  /* CRAZYRANDOMSWORD_H  */
