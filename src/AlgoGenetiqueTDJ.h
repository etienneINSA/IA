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

protected:
	Jeu m_jeu;
	int m_taillePopulation;
	int m_nombreManches;
	int m_memoirePop;
	std::vector<IndividuTDJ> m_population;

public:
	AlgoGenetiqueTDJ(const Jeu &unJeu, const int uneTaillePop, const int unNombreManches, const int uneMemoirePop);
	virtual ~AlgoGenetiqueTDJ();
	Jeu getJeu() const;
	void setJeu(const Jeu &unJeu);
	IndividuTDJ getIndividu(const int unIndividu) const;
	void addIndividu();
	void addIndividu(const IndividuTDJ &unIndividu);
	void setPopulation(const std::vector<IndividuTDJ> &unePopulation);
	int getTaillePop() const;
	int getNombreManches() const;
	void setNombreManches(const int unNombreManches);
	int getMemoirePop() const;
	void affichage() const;

protected:
	std::vector<double> fitnessFunction(Strategie &unJoueur1, Strategie &unJoueur2);
	virtual void selection();
	void genPopulation();
	void croisement();
	void mutation();
};

#endif /* ALGOGENETIQUETDJ_H_ */
