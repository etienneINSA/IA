/*
 * GeneDouble.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include "GeneDouble.h"

GeneDouble::GeneDouble():m_valeur(0){

}

GeneDouble::GeneDouble(float uneValeur):m_valeur(uneValeur){
	// TODO Auto-generated constructor stub

}

GeneDouble::~GeneDouble() {
	// TODO Auto-generated destructor stub
}

float GeneDouble::getValeur(){
	return m_valeur;
}

void GeneDouble::setValeur(int uneValeur){
	m_valeur = uneValeur;
}
