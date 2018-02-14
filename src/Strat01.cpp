/*
 * Strat01.cpp
 *
 *  Created on: 14 févr. 2018
 *      Author: emacedegastines
 */

#include "Strat01.h"

Strat01::Strat01():m_etat(1) {
	// TODO Auto-generated constructor stub

}

Strat01::~Strat01() {
	// TODO Auto-generated destructor stub
}

int Strat01::actionSuivante(){
	m_etat = 1 - m_etat;
	return m_etat;
}

void Strat01::memoriser(const int uneAction){

}

void Strat01::reinitialiser(){
	m_etat = 1;
}
