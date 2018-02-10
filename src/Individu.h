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
protected:
	double m_gain;
	std::vector<Gene> m_chromosome;

public:
	Individu();
	virtual ~Individu();
	int getTailleChromosome() const;
	Gene getGene(const int unGene) const;
	void setGene(const int unePosition, const Gene &unGene);
	void setChromosome(const std::vector<Gene> &unChromosome);
	double getGain() const;
	void setGain(const double unGain);

};

bool operator<(const Individu &unIndividu1, const Individu &unIndividu2);

#endif /* INDIVIDU_H_ */
