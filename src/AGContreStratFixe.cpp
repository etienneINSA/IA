/*
 * AGContreStratFixe.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include <algorithm>

#include "AGContreStratFixe.h"


AGContreStratFixe::AGContreStratFixe(Strategie &uneStrategie, const Jeu &unJeu, const int uneTaillePop, const int unNombreManches, const int uneTailleMemoire):AlgoGenetiqueTDJ(unJeu, uneTaillePop, unNombreManches, uneTailleMemoire) {
	p_strategie = &uneStrategie;
}

AGContreStratFixe::~AGContreStratFixe() {
	// TODO Auto-generated destructor stub
}

Strategie *AGContreStratFixe::getStrategie(){
	return p_strategie;
}

void AGContreStratFixe::setStrategie(Strategie &uneStrategie){
	p_strategie = &uneStrategie;
}

void AGContreStratFixe::selection(){
	int p = getTaillePop();
	std::vector<IndividuTDJ*> triIndividu;
	for (int i = 0; i < p; ++i){
		IndividuTDJ *individu = getIndividu(i);
		StrategieEvo strat1 = individu->getStrategie();
		Strategie *strat2 = getStrategie();
		std::vector<double> eval = fitnessFunction(strat1, *strat2);
		individu->setGain(eval.at(0));
		triIndividu.push_back(individu);
	}
	sort(triIndividu.begin(), triIndividu.end());
	triIndividu.erase(triIndividu.begin() + getTaillePop()/2, triIndividu.end());
	setPopulation(triIndividu);
}
