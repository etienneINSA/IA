/*
 * AlgoGenetiqueTDJ.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include <cstdlib>
#include <algorithm>
#include <iostream>

#include "AlgoGenetiqueTDJ.h"

AlgoGenetiqueTDJ::AlgoGenetiqueTDJ(Jeu &unJeu, int uneTaillePop, int unNombreManches, int uneMemoirePop):
	m_jeu(unJeu), m_taillePopulation(uneTaillePop), m_nombreManches(unNombreManches), m_memoirePop(uneMemoirePop){
	genPopulation();

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

void AlgoGenetiqueTDJ::setPopulation(std::vector<IndividuTDJ> &unePopulation){
	m_population =  unePopulation;
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
	unJoueur1.reinitialiser();
	unJoueur2.reinitialiser();
	std::vector<double> resultat;
	resultat.push_back(gainJoueur1);
	resultat.push_back(gainJoueur1);
	return resultat;
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
			GeneDouble gene1 = getIndividu(i).getGene(j);
			GeneDouble gene2 = getIndividu(i + 1).getGene(j);
			if (r  < 0.75){
				getIndividu(t + i).setGene(j, gene1);
				getIndividu(t + i + 1).setGene(j, gene2);
			}
			else{
				getIndividu(t + i).setGene(j, gene2);
				getIndividu(t + i + 1).setGene(j, gene1);
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

void AlgoGenetiqueTDJ::affichage(){
		int t = getTaillePop();
		for (int i = 0; i < t; ++i){
			std::cout << getIndividu(i).getGain() << std::endl;
		}
}
