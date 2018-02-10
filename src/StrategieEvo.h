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


class IndividuTDJ;

class StrategieEvo : public Strategie {
protected:
	IndividuTDJ *p_individu;
	int m_tailleMemoire;
	int m_dernieresActions;
public:
	StrategieEvo(IndividuTDJ &unIndividu, const int uneTailleMemoire);
	virtual ~StrategieEvo();
	int actionSuivante();
	void reinitialiser();
	void memoriser(const int uneAction);
	IndividuTDJ *getIndividu();
	void setIndividu(IndividuTDJ &unIndividu);
	int getTailleMemoire() const;
	int getAction(const int uneValeur) const;
	void setAction(const int uneSuiteDActions);

};

#endif /* STRATEGIEEVO_H_ */
