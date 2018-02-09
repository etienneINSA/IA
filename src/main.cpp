/*
 * main.cpp
 *
 *  Created on: 9 févr. 2018
 *      Author: et
 */

#include <vector>

#include "StratChoix1.h"
#include "AGContreStratFixe.h"
#include "Jeu.h"

int main (int argc, char *argv[]) {
	std::vector<int> matriceGains = {-1, -1, -10, 0, 0, -10, -5, -5};
	Jeu jeu(matriceGains);
	StratChoix1 strat;
	AGContreStratFixe algo(strat, jeu, 20, 20, 4);
	algo.affichage();
	algo.doOneGeneration();
	algo.affichage();
}
