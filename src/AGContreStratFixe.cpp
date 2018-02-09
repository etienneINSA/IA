/*
 * AGContreStratFixe.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include <algorithm>

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
	std::vector<IndividuTDJ> triIndividu;
	for (int i = 0; i < p; ++i){
		IndividuTDJ individu = getIndividu(i);
		StrategieEvo strat1 = individu.getStrategie();
		Strategie strat2 = getStrategie();
		std::vector<double> eval = fitnessFunction(strat1, strat2);
		individu.setGain(eval.at(0));
		triIndividu.push_back(individu);
	}
	sort(triIndividu.begin(), triIndividu.end());
	triIndividu.resize( getTaillePop()/2);
	setPopulation(triIndividu);
}
