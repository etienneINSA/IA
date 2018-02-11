/*
 * AlgoGenetique.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

#include "AlgoGenetique.h"

template<class T> AlgoGenetique<T>::AlgoGenetique(){

}

template<class T> AlgoGenetique<T>::~AlgoGenetique(){

}
template<class T> void AlgoGenetique<T>::doOneGeneration(){
	selection();
	croisement();
	mutation();
}

template<class T> void AlgoGenetique<T>::doGenerations(const int n){
	for (int i = 0; i < n; ++i){
		selection();
		croisement();
		mutation();
	}
}

template<class T> int AlgoGenetique<T>::getTaillePop() const{
	return m_population.size();
}

template<class T> T AlgoGenetique<T>::getPop(const int unIndividu) const{
	return m_population.at(unIndividu);
}


template<class T> void AlgoGenetique<T>::genPopulation(){

}

template<class T> void AlgoGenetique<T>::selection(){

}

template<class T> void AlgoGenetique<T>::croisement(){

}

template<class T> void AlgoGenetique<T>::mutation(){

}
