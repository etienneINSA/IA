/*
 * Jeu.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include "Jeu.h"

Jeu::Jeu(const std::vector<int> &uneMatriceGains):m_matriceGains(uneMatriceGains) {
	// TODO Auto-generated constructor stub

}

Jeu::~Jeu() {
	// TODO Auto-generated destructor stub
}

int Jeu::getValeurMatrice(const int uneValeur) const{
	return m_matriceGains.at(uneValeur);
}

std::vector<int> Jeu::resultat(const int choixJoueur1, const int choixJoueur2) const{
	std::vector<int> resultat;
	resultat.push_back( getValeurMatrice( 2*(choixJoueur1 + 2*choixJoueur2) ) );
	resultat.push_back( getValeurMatrice( 2*(choixJoueur1 + 2*choixJoueur2)+1 ) );
	return resultat;
}
