#pragma once
#include <iostream>
using namespace std;
class Komnata {
	double dlina, shirina, visota;
	double* mas;
public:
	Komnata() {
		dlina = 0;
		shirina= 0;
		visota = 0;
		cout << "Конструктор по умолчанию.\n";
	}
	Komnata(double dl, double shir, double vis){
		dlina = dl;
		shirina = shir;
		visota = vis;
	}
	~Komnata() {
		cout << "Деструктор вызван, объект удалён.";
		delete[] mas;
	}
	void manualInput() {
		cout << "Введите длину ";
		cin >> dlina;
		cout << "\nВведите ширину ";
		cin >> shirina;
		cout << "\nВведите высоту ";
		cin >> visota;
	}
	double ploshSOknami() {
		return 2 * (dlina + shirina) * visota;
	}

};