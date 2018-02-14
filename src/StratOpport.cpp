/*
 * StratOpport.cpp
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#include "StratOpport.h"

StratOpport::StratOpport() : m_dernierChoix(0), m_dernierChoixAdv(0) {
	// TODO Auto-generated constructor stub

}

StratOpport::~StratOpport() {
	// TODO Auto-generated destructor stub
}


int StratOpport::actionSuivante(){
	m_dernierChoix = (1-m_dernierChoix)*(1-m_dernierChoixAdv);
	return m_dernierChoix;

}

void StratOpport::memoriser(const int uneAction){
	m_dernierChoixAdv = uneAction;
}

void StratOpport::reinitialiser(){
	m_dernierChoix = 0;
	m_dernierChoixAdv = 0;
}
