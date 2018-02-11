/*
 * IndividuTDJ.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include <cmath>
#include <cstdlib>

#include "IndividuTDJ.h"

IndividuTDJ::IndividuTDJ(const int uneTailleMemoire):Individu<GeneDouble>(pow(2, uneTailleMemoire)), m_strategie(*this, uneTailleMemoire){

}

IndividuTDJ::IndividuTDJ(const std::vector<GeneDouble> &unChromosome, const int uneTailleMemoire): Individu<GeneDouble>(unChromosome, uneTailleMemoire), m_strategie(*this, uneTailleMemoire){
	// TODO Auto-generated destructor stub
}

IndividuTDJ::~IndividuTDJ(){
	// TODO Auto-generated destructor stub
}

GeneDouble IndividuTDJ::getGene(const int unGene){
	return  m_chromosome.at(unGene);
}

void IndividuTDJ::setGene(const int unePosition, GeneDouble &unGene){
	m_chromosome.at(unePosition) = unGene;
}

void IndividuTDJ::setChromosome(const std::vector<GeneDouble> &unChromosome){
	m_chromosome = unChromosome;
}

void IndividuTDJ::setRandomChromosome(){
	int t = getTailleChromosome();
	for (int i = 0; i < t; ++i){
		double r = rand()/(double)RAND_MAX;
		GeneDouble gene(r);
		setGene(i, gene);
	}
}

StrategieEvo IndividuTDJ::getStrategie() const{
	return m_strategie;
}


