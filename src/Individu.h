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

template<class T> class Individu {
protected:
	double m_gain;
	std::vector<T> m_chromosome;

public:
	Individu(const int uneTailleChromosome);
	Individu(const std::vector<T> &unChromosome, const int uneTailleChromosome);
	virtual ~Individu();
	int getTailleChromosome() const;
	T getGene(const int unGene)const;
	void setGene(const int unePosition, T &unGene);
	void setChromosome(const std::vector<T> &unChromosome);
	double getGain() const;
	void setGain(const double unGain);

};

#include "Individu.inl"

template<class T> bool operator<(const Individu<T> &unIndividu1, const Individu<T> &unIndividu2){
	return unIndividu1.getGain() < unIndividu2.getGain();
}
#endif /* INDIVIDU_H_ */
