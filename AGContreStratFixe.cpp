/*
 * AGContreStratFixe.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include "AGContreStratFixe.h"


AGContreStratFixe::AGContreStratFixe(Strategie &uneStrategie, Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneTailleMemoire):AlgoGenetiqueTDJ(unJeu, uneTaillePop, unNombreManches, uneTailleMemoire), m_strategie(uneStrategie) {

}

AGContreStratFixe::~AGContreStratFixe() {
	// TODO Auto-generated destructor stub
}

Strategie AGContreStratFixe::getStrategie(){
	return m_strategie;
}

void AGContreStratFixe::setStrategie(Strategie &uneStrategie){
	m_strategie = uneStrategie;
}

void AGContreStratFixe::selection(){
	int p = getTaillePop();
	for (int i = 0; i < p; ++i){
		std::vector<double> eval = fitnessFunction(getIndividu(i).getStrategie(), getStrategie);
	}
}
