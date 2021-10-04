#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Mas {
public:
	int* massiv;
	int rasmer;
public:
	Mas(int rasm) {
		rasmer = rasm;
		init();
	}
	~Mas() {
		delete[] massiv;
	}
	void sortmas() {
		for (int i = 0; i < rasmer - 1; i++) {
			int min = INT_MAX;
			int imin = 0;
			for (int k = i; k < rasmer ; k++) {
				if (massiv[k] < min) {
					min = massiv[k];
					imin = k;
				}
			}
			swap(massiv[i], massiv[imin]);
		}
	}
	int kolchet() {
		int kol = 0;
		for (int i = 0; i < rasmer; i++) {
			if (massiv[i] % 2 == 0) {
				kol++;
			}
		}
		return kol;
	}
	int kolnechet() {
		int kol = 0;
		for (int i = 0; i < rasmer; i++) {
			if (massiv[i] % 2 == 1) {
				kol++;
			}
		}
		return kol;
	}
	void init() {
		delete[] massiv;
		massiv = new int[rasmer];
	}
	void zapolnitRand(int nacalo, int konec) {
		srand(time(0));
		konec++;
		for (int i = 0; i < rasmer; i++) {
			massiv[i] = rand() % (konec - nacalo) + nacalo;
		}
	}
	void printmas() {
		for (int i = 0; i < rasmer; i++) {
			cout << massiv[i] << " ";
		}
		cout << endl;
	}

};