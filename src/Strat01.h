/*
 * Strat01.h
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#ifndef SRC_STRAT01_H_
#define SRC_STRAT01_H_

#include "Strategie.h"

class Strat01 : public Strategie{
	int m_etat;
public:
	Strat01();
	virtual ~Strat01();
	int actionSuivante();
	void memoriser(const int uneAction);
	void reinitialiser();

};


#endif /* SRC_STRAT01_H_ */
