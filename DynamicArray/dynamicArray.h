#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>

class DynamicArray
{

public:
	DynamicArray();
	DynamicArray(unsigned int _capacite);
	unsigned int getCapacite();
	int getElement(unsigned int _index);
	void setElement(unsigned int _index, int _valeur);
	void setCapacite(unsigned int _capacite);

private:
	unsigned int capacite;
	int * tabElements;
};


#endif //DYNAMICARRAY_H_