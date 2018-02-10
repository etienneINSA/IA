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
protected:
	std::vector<int> m_matriceGains;

public:
	Jeu(const std::vector<int> &uneMatriceGains);
	virtual ~Jeu();
	int getValeurMatrice(const int uneValeur) const;
	std::vector<int> resultat(const int choixJoueur1, const int choixJoueur2) const;
};

#endif /* JEU_H_ */
