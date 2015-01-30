#include "dynamicArray.h"

DynamicArray::DynamicArray(){
	tabElements = new int[100];

	for (int i = 0; i < 100; i++){
		tabElements[i] = 0;
	}
	
	capacite = 100;
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