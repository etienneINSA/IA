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

class Strategie;
class Jeu;

class AGContreStratFixe : public AlgoGenetiqueTDJ{
private:
	Strategie m_strategie;

public:
	AGContreStratFixe(Strategie &uneStrategie, Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneTailleMemoire);
	virtual ~AGContreStratFixe();
	Strategie getStrategie();
	void setStrategie(Strategie &uneStrategie);
private:
	void selection();
};

#endif /* AGCONTRESTRATFIXE_H_ */
