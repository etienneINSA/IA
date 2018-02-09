/*
 * StrategieEvo.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include <cmath>
#include <cstdlib>

#include "StrategieEvo.h"

StrategieEvo::StrategieEvo(int uneTailleMemoire):m_tailleMemoire(uneTailleMemoire), m_dernieresActions(0){
	// TODO Auto-generated constructor stub

}

StrategieEvo::~StrategieEvo() {
	// TODO Auto-generated destructor stub
}

int StrategieEvo::actionSuivante(std::vector<GeneDouble> &unChromosome){
	int resultat =  unChromosome.at(m_dernieresActions).getValeur() > rand()/(double)RAND_MAX;
	return resultat;
}

void StrategieEvo::reinitialiser(){
	setAction(0);
}

void StrategieEvo::nouvelleAction(int uneAction){
	m_dernieresActions = m_dernieresActions << 1;
	m_dernieresActions+= uneAction;
	m_dernieresActions&= ~(1UL << m_tailleMemoire);
}


int StrategieEvo::getTailleMemoire(){
	return m_tailleMemoire;
}

int StrategieEvo::getAction(int uneValeur){
	return (m_dernieresActions >> uneValeur) & 1U;
}

void StrategieEvo::setAction(int uneSuiteDActions){
	m_dernieresActions = uneSuiteDActions;
}
