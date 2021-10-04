#include <iostream>
#include "Mas.h"

using namespace std;



void main() {
	setlocale(0, "Russian");
	Mas eva(15);
	eva.zapolnitRand(-10, 20);
	eva.printmas();
	Mas chet(eva.kolchet());
	Mas nechet(eva.kolnechet());


	
	

}