/*
 * Jeu.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include "Jeu.h"

Jeu::Jeu(std::vector<int> &uneMatriceGains):m_matriceGains(uneMatriceGains) {
	// TODO Auto-generated constructor stub

}

Jeu::~Jeu() {
	// TODO Auto-generated destructor stub
}

std::vector<int> Jeu::resultat(int choixJoueur1, int choixJoueur2){
	std::vector<int> resultat = {2*(choixJoueur1 + 2*choixJoueur2),  2*(choixJoueur1 + 2*choixJoueur2)+1};
	return resultat;
}
