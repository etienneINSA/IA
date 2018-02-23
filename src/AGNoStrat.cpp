/*
 * AGNoStrat.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include <algorithm>

#include "AGNoStrat.h"


AGNoStrat::AGNoStrat(Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneTailleMemoire):AlgoGenetiqueTDJ(unJeu, uneTaillePop, unNombreManches, uneTailleMemoire){
	// TODO Auto-generated constructor stub

}

AGNoStrat::~AGNoStrat() {
	// TODO Auto-generated destructor stub
}

void AGNoStrat::selection(){
	int p = getTaillePop();
	for (int i = 0; i < p; i+=2){
		IndividuTDJ *individu1 = getIndividu(i);
		StrategieEvo strat1 = individu1->getStrategie();
		IndividuTDJ *individu2 = getIndividu(i+1);
		StrategieEvo strat2 = individu2->getStrategie();
		std::vector<double> eval = fitnessFunction(strat1, strat2);
		individu1->setGain(eval.at(0));
		individu2->setGain(eval.at(1));
	}
	sort(m_population.begin(), m_population.end(), Individu<GeneDouble>::comparaisonIndividu);
	//affichage();
	addMoyenne();
	m_population.erase(m_population.begin(), m_population.begin() + getTaillePop()/2);
}
