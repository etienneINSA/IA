/*
 * AlgoGenetique.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include "AlgoGenetique.h"

AlgoGenetique::AlgoGenetique(){

}

AlgoGenetique::~AlgoGenetique(){

}
void AlgoGenetique::doOneGeneration(){
	selection();
	croisement();
	mutation();
}

void AlgoGenetique::doGenerations(const int n){
	for (int i = 0; i < n; ++i){
		selection();
		croisement();
		mutation();
	}
}

int AlgoGenetique::getTaillePop() const{
	return m_population.size();
}

Individu AlgoGenetique::getPop(const int unIndividu) const{
	return m_population.at(unIndividu);
}


void AlgoGenetique::genPopulation(){

}

void AlgoGenetique::selection(){

}

void AlgoGenetique::croisement(){

}

void AlgoGenetique::mutation(){

}
