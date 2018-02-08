/*
 * Individu.cpp
 *
 *  Created on: 7 févr. 2018
 *      Author: emacedegastines
 */

#include "Individu.h"


Individu::Individu():m_gain(0){

}

Individu::~Individu(){

}

int Individu::getTailleChromosome(){
	return m_chromosome.size();
}

Gene Individu::getGene(int unGene){
	return m_chromosome.at(unGene);

}

void Individu::setGene(int unePosition, Gene unGene){
	m_chromosome.at(unePosition) = unGene;
}


void Individu::setChromosome(std::vector<Gene> &unChromosome){
	m_chromosome = unChromosome;
}
