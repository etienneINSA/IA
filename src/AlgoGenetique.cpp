/*
 * AlgoGenetique.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include "AlgoGenetique.h"

AlgoGenetique::AlgoGenetique(){
	genPopulation();
}

void AlgoGenetique::doOneGeneration(){
	selection();
	croisement();
	mutation();
}

void AlgoGenetique::doGenerations(int n){
	for (int i = 0; i < n; ++i){
		selection();
		croisement();
		mutation();
	}
}

int AlgoGenetique::getTaillePop(){
	return m_population.size();
}

Individu AlgoGenetique::getPop(int unIndividu){
	return m_population.at(unIndividu);
}

