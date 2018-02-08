/*
 * AlgoGenetiqueTDJ.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef ALGOGENETIQUETDJ_H_
#define ALGOGENETIQUETDJ_H_

#include <vector>

#include "AlgoGenetique.h"
#include "Jeu.h"
#include "IndividuTDJ.h"
#include "Strategie.h"


class AlgoGenetiqueTDJ : public AlgoGenetique {

private:
	Jeu m_jeu;
	int m_taillePopulation;
	int m_nombreManches;
	int m_memoirePop;
	std::vector<IndividuTDJ> m_population;

public:
	AlgoGenetiqueTDJ(Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneMemoirePop);
	virtual ~AlgoGenetiqueTDJ();
	Jeu getJeu();
	void setJeu(Jeu &unJeu);
	IndividuTDJ getIndividu(int unIndividu);
	void addIndividu();
	void addIndividu(IndividuTDJ &unIndividu);
	int getTaillePop();
	int getNombreManches();
	void setNombreManches(int unNombreManches);
	int getMemoirePop();

private:
	std::vector<double> fitnessFunction(Strategie &unJoueur1, Strategie &unJoueur2);
	void genPopulation();
	void croisement();
	void mutation();
};

#endif /* ALGOGENETIQUETDJ_H_ */
