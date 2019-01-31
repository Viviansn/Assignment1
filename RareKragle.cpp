/*
 * File:   RareKragle.cpp
 * Author: Vivian Nguyen <vsn17@my.fsu.edu>
 * 
 * Created on January 30, 2019, 9:18 PM
 */

#include "RareKragle.h"

double RareKragle::hit(double armor)
{
	if (armor >= 100000)
		return 0;
	else
		return hitPoints;
}

