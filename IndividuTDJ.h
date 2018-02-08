/*
 * IndividuTDJ.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef INDIVIDUTDJ_H_
#define INDIVIDUTDJ_H_

#include <vector>

#include "GeneDouble.h"
#include "Individu.h"
#include "StrategieEvo.h"

class IndividuTDJ : public Individu {
private:

	StrategieEvo m_strategie;
	std::vector<GeneDouble> m_chromosome;

public:
	IndividuTDJ(int uneTailleMemoire);
	IndividuTDJ(std::vector<GeneDouble> &unChromosome, int uneTailleMemoire);
	virtual ~IndividuTDJ();
	GeneDouble getGene(int unGene);
	void setGene(int unePosition, GeneDouble &unGene);
	void setRandomChromosome();
	StrategieEvo getStrategie();

};

#endif /* INDIVIDUTDJ_H_ */
