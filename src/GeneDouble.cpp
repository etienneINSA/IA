/*
 * GeneDouble.cpp
 *
 *  Created on: 5 févr. 2018
 *      Author: emacedegastines
 */

#include "GeneDouble.h"

GeneDouble::GeneDouble():m_valeur(0){

}

GeneDouble::GeneDouble(const double uneValeur):m_valeur(uneValeur){
	// TODO Auto-generated constructor stub

}

GeneDouble::~GeneDouble() {
	// TODO Auto-generated destructor stub
}

double GeneDouble::getValeur() const{
	return m_valeur;
}

void GeneDouble::setValeur(const int uneValeur){
	m_valeur = uneValeur;
}
