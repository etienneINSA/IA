/*
 * AlgoGenetique.h
 *
 *  Created on: 26 janv. 2018
 *      Author: emacedegastines
 */

#ifndef ALGOGENETIQUE_H_
#define ALGOGENETIQUE_H_

#include <vector>

#include "Individu.h"

template<class T> class AlgoGenetique {
protected:
	std::vector<T> m_population;

public:
	AlgoGenetique();
	virtual ~AlgoGenetique();

	void doOneGeneration();
	void doGenerations(const int n);

	int getTaillePop() const;
	T getPop(const int unIndividu) const;

protected:
	void genPopulation();
	void selection();
	void croisement();
	void mutation();
};

#include "AlgoGenetique.inl"

#endif /* ALGOGENETIQUE_H_ */
