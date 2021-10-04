#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student {
public:
	string name;
	int fiz;
	int him;
	int oaip;
	void sluch() {
		fiz = rand() % 10 + 1;
		him = rand() % 10 + 1;
		oaip = rand() % 10 + 1;
	}
	void vivod() {
		cout << "Имя студента: " << name <<
			" Физика " << fiz <<
			" Химия " << him <<
			" ОАиП " << oaip << endl;
	}
	double srball() {
		return (fiz + him + oaip) / 3.0;
	}

};