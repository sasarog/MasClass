#include <iostream>

using namespace std;
double formula(double x) {
	return 1 / pow(x, 2);
}
int main() {
	setlocale(0, "russian");
	double pred = 0, tek = 0, x = 2, h = 0.0001,
		eps = 0.000001, otvet = 0;
	pred = formula(x);
	x += h;
	tek = formula(x);
	x += h;
	while (fabs(tek - pred) > eps) {
		pred = tek;
		tek = formula(x);
		otvet += tek;
		x += h;
		cout << "Текуцщее значение " << tek << " Разница " 
			<< fabs(tek - pred) <<  endl;
	}
	cout << "Ответ: " << otvet;
}