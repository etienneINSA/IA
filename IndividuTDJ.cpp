/*
 * IndividuTDJ.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include <cstdlib>

#include "IndividuTDJ.h"

IndividuTDJ::IndividuTDJ(int uneTailleMemoire):m_strategie(uneTailleMemoire){

}

IndividuTDJ::IndividuTDJ(std::vector<GeneDouble> &unChromosome, int uneTailleMemoire):m_chromosome(unChromosome), m_strategie(uneTailleMemoire){
	// TODO Auto-generated destructor stub
}

IndividuTDJ::~IndividuTDJ(){
	// TODO Auto-generated destructor stub
}

GeneDouble IndividuTDJ::getGene(int unGene){
	return m_chromosome.at(unGene);
}

void IndividuTDJ::setGene(int unePosition, GeneDouble &unGene){
	m_chromosome.at(unePosition) = unGene;
}

void IndividuTDJ::setRandomChromosome(){
	int t = getTailleChromosome();
	for (int i = 0; i < t; ++i){
		double r = rand()/(double)RAND_MAX;
		GeneDouble gene(r);
		setGene(i, gene);
	}
}

StrategieEvo IndividuTDJ::getStrategie(){
	return m_strategie;
}


