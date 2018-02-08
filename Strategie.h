/*
 * Strategie.h
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#ifndef STRATEGIE_H_
#define STRATEGIE_H_


class Strategie {
public:
	Strategie();
	virtual ~Strategie();
	virtual int actionSuivante();
	virtual void reinitialiser();
};

#endif /* STRATEGIE_H_ */
