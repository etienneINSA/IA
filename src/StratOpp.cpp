/*
 * StratOpp.cpp
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#include "StratOpp.h"

StratOpp::StratOpp(): m_dernierChoix(0){
	// TODO Auto-generated constructor stub

}

StratOpp::~StratOpp() {
	// TODO Auto-generated destructor stub
}


int StratOpp::actionSuivante(){
	return (1 - m_dernierChoix);
}

void StratOpp::memoriser(const int uneAction){
	m_dernierChoix = uneAction;
}

void StratOpp::reinitialiser(){
	m_dernierChoix = 0;
}
