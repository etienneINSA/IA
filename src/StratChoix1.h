/*
 * StratChoix1.h
 *
 *  Created on: 9 f�vr. 2018
 *      Author: et
 */

#ifndef STRATCHOIX1_H_
#define STRATCHOIX1_H_

class StratChoix1: public Strategie {
public:
	StratChoix1();
	virtual ~StratChoix1();
	int actionSuivante();
	void reinitialiser();

};

#endif /* STRATCHOIX1_H_ */
