/*
 * AGNoStrat.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef AGNOSTRAT_H_
#define AGNOSTRAT_H_

#include "AlgoGenetiqueTDJ.h"

class Jeu;

class AGNoStrat : public AlgoGenetiqueTDJ{
public:
	AGNoStrat(Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneTailleMemoire);
	virtual ~AGNoStrat();
private:
	void selection();
};

#endif /* AGNOSTRAT_H_ */
