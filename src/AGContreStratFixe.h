/*
 * AGContreStratFixe.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef AGCONTRESTRATFIXE_H_
#define AGCONTRESTRATFIXE_H_

#include "Strategie.h"
#include "AlgoGenetiqueTDJ.h"

class Jeu;

class AGContreStratFixe : public AlgoGenetiqueTDJ{
protected:
	Strategie *p_strategie;

public:
	AGContreStratFixe(Strategie &uneStrategie, const Jeu &unJeu, const int uneTaillePop, const int unNombreManches, const int uneTailleMemoire);
	virtual ~AGContreStratFixe();
	Strategie *getStrategie();
	void setStrategie(Strategie &uneStrategie);
protected:
	void selection();
};

#endif /* AGCONTRESTRATFIXE_H_ */
