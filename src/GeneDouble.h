/*
 * GeneDouble.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef GENEDOUBLE_H_
#define GENEDOUBLE_H_

#include "Gene.h"

class GeneDouble : public Gene {
protected:
	double m_valeur;
public:
	GeneDouble();
	GeneDouble(const double uneValeur);
	virtual ~GeneDouble();
	double getValeur() const;
	void setValeur(const int uneValeur);
};
#endif /* GENEDOUBLE_H_ */
