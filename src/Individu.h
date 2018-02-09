/*
 * Individu.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef INDIVIDU_H_
#define INDIVIDU_H_

#include <vector>

#include "Gene.h"

class Individu {
private :
	double m_gain;
	std::vector<Gene> m_chromosome;

public:
	Individu();
	virtual ~Individu();
	int getTailleChromosome();
	Gene getGene(int unGene);
	void setGene(int unePosition, Gene unGene);
	void setChromosome(std::vector<Gene> &unChromosome);
	double getGain();
	void setGain(double unGain);

};

bool operator<(Individu &unIndividu1, Individu &unIndividu2);

#endif /* INDIVIDU_H_ */
