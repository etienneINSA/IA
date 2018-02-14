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

AlgoGenetiqueTDJ::AlgoGenetiqueTDJ(const Jeu &unJeu, const int uneTaillePop, const int unNombreManches, const int uneMemoirePop):
	m_jeu(unJeu), m_taillePopulation(uneTaillePop), m_nombreManches(unNombreManches), m_memoirePop(uneMemoirePop){
	genPopulation();
}

AlgoGenetiqueTDJ::~AlgoGenetiqueTDJ() {
	// TODO Auto-generated destructor stub
}

Jeu AlgoGenetiqueTDJ::getJeu() const{
	return m_jeu;
}

void AlgoGenetiqueTDJ::setJeu(const Jeu &unJeu){
	m_jeu = unJeu;
}

void AlgoGenetiqueTDJ::addIndividu(){
	IndividuTDJ *individu = new IndividuTDJ(getMemoirePop());
	addIndividu(*individu);
}

void AlgoGenetiqueTDJ::addIndividu(IndividuTDJ &unIndividu){
	m_population.push_back(&unIndividu);
}


int AlgoGenetiqueTDJ::getTaillePop() const{
	return m_taillePopulation;
}


int AlgoGenetiqueTDJ::getNombreManches() const{
	return m_nombreManches;
}

void AlgoGenetiqueTDJ::setNombreManches(const int unNombreManches){
	m_nombreManches = unNombreManches;
}

int AlgoGenetiqueTDJ::getMemoirePop() const{
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
		unJoueur1.memoriser(actionJoueur2);
		unJoueur2.memoriser(actionJoueur1);
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
		addIndividu();
		m_population.at(i)->setRandomChromosome();
	}
}

void AlgoGenetiqueTDJ::selection(){

}


void AlgoGenetiqueTDJ::croisement(){
	int t = getTaillePop();
	for (int i = 0; i < t/2; i+=2){
		addIndividu();
		addIndividu();
		for(int j = 0; j < getIndividu(i)->getTailleChromosome(); ++j){
			double r = rand()/(double)RAND_MAX;
			GeneDouble *gene1 = new GeneDouble();
			gene1->copie(*getIndividu(i)->getGene(j));
			GeneDouble *gene2 = new GeneDouble();
			gene2->copie(*getIndividu(i + 1)->getGene(j));
			if (r  < 0.75){
				getIndividu(t/2 + i)->setGene(j, *gene1);
				getIndividu(t/2 + i + 1)->setGene(j, *gene2);
			}
			else{
				getIndividu(t/2 + i)->setGene(j, *gene2);
				getIndividu(t/2 + i + 1)->setGene(j, *gene1);
			}
		}
	}
}

void AlgoGenetiqueTDJ::mutation(){
	int t = getTaillePop();
	for (int i = 0; i < t; ++i){
		for(int j = 0; j < getIndividu(i)->getTailleChromosome(); ++j){
			double valeurGene = getIndividu(i)->getGene(j)->getValeur();
			double r = rand()/(double)RAND_MAX*0.1 - 0.05;
			getIndividu(i)->getGene(j)->setValeur( std::max(0., std::min(1., valeurGene + r)));
		}
	}
}

void AlgoGenetiqueTDJ::affichage() {
		int t = getTaillePop();
		for (int i = 0; i < t; ++i){
			std::cout << i << ": " << getIndividu(i)->getGain() << " " << getIndividu(i)->getGene(0)->getValeur() <<" " << getIndividu(i)->getGene(1)->getValeur() <<" " << getIndividu(i)->getGene(2)->getValeur() <<" " << getIndividu(i)->getGene(3)->getValeur() << std::endl;
		}
		std::cout << " " << std::endl;
}
