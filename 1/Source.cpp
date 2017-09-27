#include <iostream>
#include "Header.h"
#include "Pair.h"

void Ejercicio1()
{
	int val1 = 3;
	float val2 = 9;
	swapValue<int, float>(val1, val2);
}



int main()
{
	Ejercicio1();
	Pair<int> pareja(1, 2);
	return 0;
}