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


class AlgoGenetiqueTDJ : public AlgoGenetique<IndividuTDJ> {

protected:
	Jeu m_jeu;
	int m_taillePopulation;
	int m_nombreManches;
	int m_memoirePop;
	std::vector<std::vector<double>> m_moyenne;

public:
	AlgoGenetiqueTDJ(const Jeu &unJeu, const int uneTaillePop, const int unNombreManches, const int uneMemoirePop);
	virtual ~AlgoGenetiqueTDJ();
	Jeu getJeu() const;
	void setJeu(const Jeu &unJeu);
	int getTaillePop() const;
	void addIndividu();
	void addIndividu(IndividuTDJ &unIndividu);
	int getNombreManches() const;
	void setNombreManches(const int unNombreManches);
	int getMemoirePop() const;
	void affichage();
	void addMoyenne();
	void affichageMoyenne();

protected:
	std::vector<double> fitnessFunction(Strategie &unJoueur1, Strategie &unJoueur2);
	virtual void selection();
	virtual void genPopulation();
	virtual void croisement();
	virtual void mutation();
};

#endif /* ALGOGENETIQUETDJ_H_ */
