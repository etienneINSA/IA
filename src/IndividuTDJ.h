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

class IndividuTDJ: public Individu<GeneDouble>{
protected:

	StrategieEvo m_strategie;

public:
	IndividuTDJ(const int uneTailleMemoire);
	IndividuTDJ(std::vector<GeneDouble*> &unChromosome, const int uneTailleMemoire);
	virtual ~IndividuTDJ();
	GeneDouble *getGene(const int unGene);
	void setGene(const int unePosition, GeneDouble &unGene);
	void setChromosome(std::vector<GeneDouble*> &unChromosome);
	void setRandomChromosome();
	StrategieEvo getStrategie() const;

};

#endif /* INDIVIDUTDJ_H_ */
