/*
 * AlgoGenetique.cpp
 *
 *  Created on: 6 févr. 2018
 *      Author: emacedegastines
 */

template<class T> AlgoGenetique<T>::AlgoGenetique(){

}

template<class T> AlgoGenetique<T>::~AlgoGenetique(){
	int t = getTaillePop();
	for (int i = 0; i < t; ++i){
		delete(getIndividu(i));
	}

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

template<class T> T *AlgoGenetique<T>::getIndividu(const int unIndividu) {
	return m_population.at(unIndividu);
}


template<class T> void AlgoGenetique<T>::addIndividu(){
	T individu();
	addIndividu(individu);
}

template<class T> void AlgoGenetique<T>::addIndividu(T &unIndividu){
	m_population.push_back(&unIndividu);
}



template<class T> void AlgoGenetique<T>::setPopulation(std::vector<T*> &unePopulation){
	m_population.clear();
	m_population = unePopulation;
}



template<class T> void AlgoGenetique<T>::genPopulation(){

}

template<class T> void AlgoGenetique<T>::selection(){

}

template<class T> void AlgoGenetique<T>::croisement(){

}

template<class T> void AlgoGenetique<T>::mutation(){

}
