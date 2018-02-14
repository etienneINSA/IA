/*
 * StratOpport.h
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#ifndef SRC_STRATOPPORT_H_
#define SRC_STRATOPPORT_H_

#include "Strategie.h"

class StratOpport : public Strategie{
	int m_dernierChoix;
	int m_dernierChoixAdv;
public:
	StratOpport();
	virtual ~StratOpport();
	int actionSuivante();
	void memoriser(const int uneAction);
	void reinitialiser();
};

#endif /* SRC_STRATOPPORT_H_ */
