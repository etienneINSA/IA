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
	std::vector<T*> m_population;

public:
	AlgoGenetique();
	virtual ~AlgoGenetique();

	void doOneGeneration();
	void doGenerations(const int n);

	int getTaillePop() const;
	T *getIndividu(const int unIndividu);
	void addIndividu();
	void addIndividu(T &unIndividu);
	void setPopulation(std::vector<T*> &unePopulation);

protected:
	virtual void genPopulation();
	virtual void selection();
	virtual void croisement();
	virtual void mutation();
};

#include "AlgoGenetique.inl"

#endif /* ALGOGENETIQUE_H_ */
