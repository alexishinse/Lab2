#include "dynamicArray.h"

DynamicArray::DynamicArray(){
	tabElements = new int[100];

	for (int i = 0; i < 100; i++){
		tabElements[i] = 0;
	}
	
	capacite = 100;
}

DynamicArray::DynamicArray(unsigned int _capacite){
	tabElements = new int[_capacite];

	for (unsigned int i = 0; i < _capacite; i++){
		tabElements[i] = 0;
	}

	capacite = _capacite;
}

DynamicArray::~DynamicArray(){
	delete[] tabElements;
}

unsigned int DynamicArray::getCapacite() const{
	return capacite;
}

int DynamicArray::getElement(unsigned int _index) const{
	return tabElements[_index];
}

void DynamicArray::setElement(unsigned int _index, int _valeur){
	tabElements[_index] = _valeur;
}

void DynamicArray::setCapacite(unsigned int _capacite){
	int* conteneurTemp = new int [_capacite];

	for (int i = 0; i < capacite; i++){
		conteneurTemp[i] = tabElements[i];
	}

	for (int i = capacite; i < _capacite; i++){
		conteneurTemp[i] = 0;
	}
	
	delete[] tabElements;
	capacite = _capacite;
	tabElements = conteneurTemp;
}