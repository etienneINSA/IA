/*
 * StratRep.h
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#ifndef SRC_STRATREP_H_
#define SRC_STRATREP_H_

#include "Strategie.h"

class StratRep : public Strategie {
	int m_dernierChoix;
public:
	StratRep();
	virtual ~StratRep();
	int actionSuivante();
	void memoriser(const int uneAction);
	void reinitialiser();
};

#endif /* SRC_STRATREP_H_ */
