/*
 * File:  SimpleHammer.h
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 *
 * Created on January 29, 2019, 1:37 PM
 */

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

#include "Weapon.h"
#include <string>

/*
  Defines the behavior of a simple hammer (hitpoint = 25, if armor < 30,
  the hammer ignores all the armor points.)
*/

class SimpleHammer : public Weapon
{
	SimpleHammer() : Weapon("Simple hammer", 25.0) {}

	virtual ~SimpleHammer() {}

	virtual double hit(double armor);

};


#endif /* SIMPLEHAMMER_H */
