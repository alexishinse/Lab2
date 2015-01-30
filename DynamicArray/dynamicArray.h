#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>

class DynamicArray
{

public:
	DynamicArray();
	unsigned int getCapacite();
	int getElement(unsigned int _index);
	void setElement(unsigned int _index, int _valeur);

private:
	unsigned int capacite;
	int * tabElements;
};


#endif //DYNAMICARRAY_H_