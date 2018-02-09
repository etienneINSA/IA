/*
 * StrategieEvo.h
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#ifndef STRATEGIEEVO_H_
#define STRATEGIEEVO_H_

#include <vector>

#include "GeneDouble.h"
#include "Strategie.h"

class StrategieEvo : public Strategie {
private:
	int m_tailleMemoire;
	int m_dernieresActions;
public:
	StrategieEvo(int uneTailleMemoire);
	virtual ~StrategieEvo();
	int actionSuivante(std::vector<GeneDouble> &unChromosome);
	void reinitialiser();
	int getTailleMemoire();
	int getAction(int uneValeur);
	void setAction(int uneSuiteDActions);
	void nouvelleAction(int uneAction);
};

#endif /* STRATEGIEEVO_H_ */
