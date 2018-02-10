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
protected:

	StrategieEvo m_strategie;
	std::vector<GeneDouble> m_chromosome;

public:
	IndividuTDJ(const int uneTailleMemoire);
	IndividuTDJ(const std::vector<GeneDouble> &unChromosome, const int uneTailleMemoire);
	virtual ~IndividuTDJ();
	GeneDouble getGene(const int unGene) const;
	void setGene(const int unePosition, const GeneDouble &unGene);
	void setRandomChromosome();
	StrategieEvo getStrategie() const;

};

#endif /* INDIVIDUTDJ_H_ */
