/*
 * main.cpp
 *
 *  Created on: 9 f�vr. 2018
 *      Author: et
 */

#include <vector>
#include <iostream>

#include "StratChoix1.h"
#include "Strat01.h"
#include "StratRep.h"
#include "StratOpp.h"
#include "StratOpport.h"
#include "AGContreStratFixe.h"
#include "AGNoStrat.h"
#include "Jeu.h"



int main(int argc, char *argv[]) {
	if (0){
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
		StratOpport strat;
		AGContreStratFixe algo(strat, jeu, 20, 20, 4);
		algo.doOneGeneration();
		algo.doGenerations(800);
		return 0;
	}

	if (1){
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
	AGNoStrat algo(jeu, 20, 20, 4);
	algo.doOneGeneration();
	algo.doGenerations(10000);
	algo.affichage();
	return 0;
	}
}

