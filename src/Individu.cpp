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

int Individu::getTailleChromosome() const{
	return m_chromosome.size();
}

Gene Individu::getGene(const int unGene) const{
	return m_chromosome.at(unGene);

}

void Individu::setGene(const int unePosition, const Gene &unGene){
	m_chromosome.at(unePosition) = unGene;
}


void Individu::setChromosome(const std::vector<Gene> &unChromosome){
	m_chromosome = unChromosome;
}

double Individu::getGain() const{
	return m_gain;
}

void Individu::setGain(const double unGain){
	m_gain = unGain;
}

bool operator<(const Individu &unIndividu1, const Individu &unIndividu2){
	return unIndividu1.getGain() < unIndividu2.getGain();
}
