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
		cout << "����������� �� ���������.\n";
	}
	Komnata(double dl, double shir, double vis){
		dlina = dl;
		shirina = shir;
		visota = vis;
	}
	~Komnata() {
		cout << "���������� ������, ������ �����.";
		delete[] mas;
	}
	void manualInput() {
		cout << "������� ����� ";
		cin >> dlina;
		cout << "\n������� ������ ";
		cin >> shirina;
		cout << "\n������� ������ ";
		cin >> visota;
	}
	double ploshSOknami() {
		return 2 * (dlina + shirina) * visota;
	}

};