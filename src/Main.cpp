/*
 * main.cpp
 *
 *  Created on: 9 f�vr. 2018
 *      Author: et
 */

#include <vector>
#include <iostream>
#include <time.h>

#include "StratChoix1.h"
#include "Strat01.h"
#include "StratRep.h"
#include "StratOpp.h"
#include "StratOpport.h"
#include "AGContreStratFixe.h"
#include "AGNoStrat.h"
#include "Jeu.h"



int main(int argc, char *argv[]) {

	srand(time(NULL));
	if (argv[1]){
		std::vector<int> matriceGains;
		matriceGains.push_back(-5);
		matriceGains.push_back(-5);
		matriceGains.push_back(0);
		matriceGains.push_back(-8);
		matriceGains.push_back(-8);
		matriceGains.push_back(0);
		matriceGains.push_back(-7);
		matriceGains.push_back(-7);
		Jeu jeu(matriceGains);
		StratRep strat;
		AGContreStratFixe algo(strat, jeu, atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
		algo.doOneGeneration();
		algo.doGenerations(1000);
		algo.affichageMoyenne();
		//algo.affichage();
		return 0;
	}

	else{
		std::vector<int> matriceGains;
		matriceGains.push_back(-1);
		matriceGains.push_back(-1);
		matriceGains.push_back(0);
		matriceGains.push_back(-10);
		matriceGains.push_back(-10);
		matriceGains.push_back(0);
		matriceGains.push_back(-5);
		matriceGains.push_back(-5);
		Jeu jeu(matriceGains);
		AGNoStrat algo(jeu,  atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
		algo.doOneGeneration();
		algo.doGenerations(10000);
		algo.affichageMoyenne();
		algo.affichage();
		return 0;
	}
	return 1;
}

