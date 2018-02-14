/*
 * StratOpp.h
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#ifndef STRATOPP_H_
#define STRATOPP_H_

#include "Strategie.h"

class StratOpp : public Strategie{
	int m_dernierChoix;

public:
	StratOpp();
	virtual ~StratOpp();
	int actionSuivante();
	void memoriser(const int uneAction);
	void reinitialiser();
};

#endif /* STRATOPP_H_ */
