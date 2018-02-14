/*
 * StratRep.cpp
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#include "StratRep.h"

StratRep::StratRep(): m_dernierChoix(0) {
	// TODO Auto-generated constructor stub

}

StratRep::~StratRep() {
	// TODO Auto-generated destructor stub
}

int StratRep::actionSuivante(){
	return m_dernierChoix;
}

void StratRep::memoriser(const int uneAction){
	m_dernierChoix = uneAction;
}

void StratRep::reinitialiser(){
	m_dernierChoix = 0;
}
