/*
 * StrategieEvo.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include <cmath>
#include <cstdlib>

#include "StrategieEvo.h"
#include "IndividuTDJ.h"

StrategieEvo::StrategieEvo(IndividuTDJ &unIndividu, const int uneTailleMemoire):m_tailleMemoire(uneTailleMemoire), m_dernieresActions(0){
	p_individu = &unIndividu;

}

StrategieEvo::~StrategieEvo() {
	// TODO Auto-generated destructor stub
}

int StrategieEvo::actionSuivante(){
	int resultat =  getIndividu()->getGene(m_dernieresActions).getValeur() > rand()/(double)RAND_MAX;
	return resultat;
}

void StrategieEvo::reinitialiser(){
	setAction(0);
}

void StrategieEvo::memoriser(const int uneAction){
	m_dernieresActions = m_dernieresActions << 1;
	m_dernieresActions+= uneAction;
	m_dernieresActions&= ~(1UL << m_tailleMemoire);
}

IndividuTDJ *StrategieEvo::getIndividu(){
	return p_individu;
}

void StrategieEvo::setIndividu(IndividuTDJ &unIndividu){
	p_individu = &unIndividu;
}

int StrategieEvo::getTailleMemoire() const{
	return m_tailleMemoire;
}

int StrategieEvo::getAction(const int uneValeur) const{
	return (m_dernieresActions >> uneValeur) & 1U;
}

void StrategieEvo::setAction(const int uneSuiteDActions){
	m_dernieresActions = uneSuiteDActions;
}
