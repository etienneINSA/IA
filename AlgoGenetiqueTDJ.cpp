/*
 * AlgoGenetiqueTDJ.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include <cstdlib>
#include <algorithm>
#include "AlgoGenetiqueTDJ.h"

AlgoGenetiqueTDJ::AlgoGenetiqueTDJ(Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneMemoirePop):
	m_jeu(unJeu), m_taillePopulation(uneTaillePop), m_nombreManches(unNombreManches), m_memoirePop(uneMemoirePop){
	// TODO Auto-generated constructor stub

}

AlgoGenetiqueTDJ::~AlgoGenetiqueTDJ() {
	// TODO Auto-generated destructor stub
}

Jeu AlgoGenetiqueTDJ::getJeu(){
	return m_jeu;
}

void AlgoGenetiqueTDJ::setJeu(Jeu &unJeu){
	m_jeu = unJeu;
}

void AlgoGenetiqueTDJ::addIndividu(){
	IndividuTDJ individu(getMemoirePop());
	addIndividu(individu);
}

void AlgoGenetiqueTDJ::addIndividu(IndividuTDJ &unIndividu){
	m_population.push_back(unIndividu);
}

IndividuTDJ AlgoGenetiqueTDJ::getIndividu(int unIndividu){
	return m_population.at(unIndividu);
}

int AlgoGenetiqueTDJ::getTaillePop(){
	return m_taillePopulation;
}


int AlgoGenetiqueTDJ::getNombreManches(){
	return m_nombreManches;
}

void AlgoGenetiqueTDJ::setNombreManches(int unNombreManches){
	m_nombreManches = unNombreManches;
}

int AlgoGenetiqueTDJ::getMemoirePop(){
	return m_memoirePop;
}

std::vector<double> AlgoGenetiqueTDJ::fitnessFunction(Strategie &unJoueur1, Strategie &unJoueur2){
	int m = getNombreManches();
	double gainJoueur1 = 0;
	double gainJoueur2 = 0;
	for (int i = 0; i < m; ++i){
		int actionJoueur1 = unJoueur1.actionSuivante();
		int actionJoueur2 = unJoueur2.actionSuivante();
		std::vector<int> resultat = getJeu().resultat( actionJoueur1, actionJoueur2);
		gainJoueur1+= resultat.at(0);
		gainJoueur2+= resultat.at(1);
	}
	return {gainJoueur1, gainJoueur2};
}

void AlgoGenetiqueTDJ::genPopulation(){
	int t = getTaillePop();
	for (int i = 0; i < t; ++i){
		getIndividu(i).setRandomChromosome();
	}
}

void AlgoGenetiqueTDJ::croisement(){
	int t = getTaillePop();
	for (int i = 0; i < t/2; i+=2){
		addIndividu();
		addIndividu();
		for(int j = 0; j < getIndividu(i).getTailleChromosome(); ++i){
			double r = rand()/(double)RAND_MAX;
			if (r  < 0.75){
				getIndividu(t + i).setGene(j,  getIndividu(i).getGene(j) );
				getIndividu(t + i + 1).setGene(j,  getIndividu(i + 1).getGene(j) );
			}
			else{
				getIndividu(t + i).setGene(j, getIndividu(i + 1).getGene(j));
				getIndividu(t + i + 1).setGene(j, getIndividu(i).getGene(j) );
			}
		}
	}
}

void AlgoGenetiqueTDJ::mutation(){
	int t = getTaillePop();
	for (int i = 0; i < t; ++i){
		for(int j = 0; j < getIndividu(i).getTailleChromosome(); ++i){
			double valeurGene = getIndividu(i).getGene(j).getValeur();
			double r = rand()/(double)RAND_MAX*0.1 - 0.05;
			getIndividu(i).getGene(j).setValeur( std::max(1., std::min(0., valeurGene + r)));
		}
	}
}
