#include <iostream>
#include "Header.h"
#include "Pair.h"
#include <string>

void Ejercicio1()
{
	int val1 = 3;
	float val2 = 9;
	swapValue<int, float>(val1, val2);
}



int main()
{
	Ejercicio1();
	Pair<std::string> pareja("hola", "adios");
	return 0;
}