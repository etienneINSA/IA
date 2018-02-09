/*
 * Jeu.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef JEU_H_
#define JEU_H_

#include <vector>


class Jeu {
private:
	std::vector<int> m_matriceGains;

public:
	Jeu(std::vector<int> &uneMatriceGains);
	virtual ~Jeu();
	std::vector<int> resultat(int choixJoueur1, int choixJoueur2);
};

#endif /* JEU_H_ */
