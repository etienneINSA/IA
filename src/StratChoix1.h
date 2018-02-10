/*
 * StratChoix1.h
 *
 *  Created on: 9 févr. 2018
 *      Author: et
 */

#ifndef STRATCHOIX1_H_
#define STRATCHOIX1_H_7

#include "Strategie.h"

class StratChoix1: public Strategie {
public:
	StratChoix1();
	virtual ~StratChoix1();
	int actionSuivante();
	void memoriser(const int uneAction);
	void reinitialiser();

};

#endif /* STRATCHOIX1_H_ */
