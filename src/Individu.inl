/*
 * Individu.inl
 *
 *  Created on: 7 févr. 2018
 *      Author: emacedegastines
 */


template<class T> Individu<T>::Individu(const int uneTailleChromosome):m_gain(0){
	for (int i = 0; i < uneTailleChromosome; ++i){
		T gene;
		m_chromosome.push_back(gene);
	} // allouer la memoire

}

template<class T> Individu<T>::Individu(const std::vector<T> &unChromosome, const int uneTailleChromosome):m_gain(0), m_chromosome(unChromosome){

}

template<class T> Individu<T>::~Individu(){

}

template<class T> int Individu<T>::getTailleChromosome() const{
	return m_chromosome.size();
}

template<class T> T Individu<T>::getGene(const int unGene) const {
	return m_chromosome.at(unGene);

}

template<class T> void Individu<T>::setGene(const int unePosition, T &unGene){
	m_chromosome.at(unePosition) = &unGene;
}


template<class T> void Individu<T>::setChromosome(const std::vector<T> &unChromosome){
	m_chromosome = unChromosome;
}

template<class T> double Individu<T>::getGain() const{
	return m_gain;
}

template<class T> void Individu<T>::setGain(const double unGain){
	m_gain = unGain;
}


