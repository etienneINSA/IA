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
#include "Jeu.h"

int main(int argc, char *argv[]) {
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
	algo.doGenerations(200);
	return 0;
}

