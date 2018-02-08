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

class AlgoGenetique {
private:
	std::vector<Individu> m_population;

public:
	AlgoGenetique();
	virtual ~AlgoGenetique();

	void doOneGeneration();
	void doGenerations(int n);

	int getTaillePop();
	Individu getPop(int unIndividu);

private:
	virtual void genPopulation();
	virtual void selection();
	virtual void croisement();
	virtual void mutation();
};

#endif /* ALGOGENETIQUE_H_ */
