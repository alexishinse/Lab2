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

unsigned int DynamicArray::getCapacite(){
	return capacite;
}

int DynamicArray::getElement(unsigned int _index){
	return tabElements[_index];
}

void DynamicArray::setElement(unsigned int _index, int _valeur){
	tabElements[_index] = _valeur;
}

void DynamicArray::setCapacite(unsigned int _capacite){
	int* conteneurTemp = tabElements;
	tabElements = new int[_capacite];

	for (int i = 0; i < capacite; i++){
		tabElements[i] = conteneurTemp[i];
	}
	
	capacite = _capacite;
}