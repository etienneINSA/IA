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
private:
	float m_valeur;
public:
	GeneDouble();
	GeneDouble(float uneValeur);
	virtual ~GeneDouble();
	float getValeur();
	void setValeur(int uneValeur);
};
#endif /* GENEDOUBLE_H_ */
