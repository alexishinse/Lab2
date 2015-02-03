#include "dynamicArray.h"
#include <algorithm>
#include <stdexcept>

DynamicArray::DynamicArray(){
	tabElements = new int[100];

	for (int i = 0; i < 100; i++){
		tabElements[i] = 0;
	}

	capacite = 100;
}

DynamicArray::DynamicArray(unsigned int _capacite){
	
	if (_capacite < 1) throw std::invalid_argument("La capacite doit etre supperieur a 0");

	tabElements = new int[_capacite];

	for (unsigned int i = 0; i < _capacite; i++){
		tabElements[i] = 0;
	}

	capacite = _capacite;
}

DynamicArray::~DynamicArray(){
	delete[] tabElements;
}

unsigned int DynamicArray::getCapacite() {
	return capacite;
}

int DynamicArray::getElement(unsigned int _index) {
	if (_index > capacite - 1) throw std::out_of_range("L'index doit se retrouver à l'intérieur du tableau");
	return tabElements[_index];
}

void DynamicArray::setElement(unsigned int _index, int _valeur){
	if (_index > capacite - 1){
		setCapacite(_index + 1);
	}
	tabElements[_index] = _valeur;
}

void DynamicArray::setCapacite(unsigned int _capacite){
	
	if (_capacite < 1) throw std::invalid_argument("La capacite doit etre superieur a 0");

	int* conteneurTemp = new int[_capacite];

	for (unsigned int i = 0; i < _capacite; i++){
		conteneurTemp[i] = 0;
	}

	for (unsigned int i = 0; i < __min(capacite, _capacite); i++){
		conteneurTemp[i] = tabElements[i];
	}

	delete[] tabElements;
	capacite = _capacite;
	tabElements = conteneurTemp;
}