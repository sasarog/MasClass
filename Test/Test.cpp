
#include <iostream>
#include <iomanip>
using namespace std;


#define massize 20 //Размер массивов
void main() {
	setlocale(0, "russian");
	srand(time(0));
	//объявление массивов
	int mas1[massize];
	int mas2[massize];
	int mas3[massize];
	//Заполнение массивов
	for (int i = 0; i < massize; i++) {
		mas1[i] = rand() % 30 - 15;
		mas2[i] = rand() % 30 - 15;
		mas3[i] = rand() % 30 - 15;
	}
	//вывод массивов на экран
	cout << "| mas1 | mas2 | mas3 |\n______________________\n";
	for (int i = 0; i < massize; i++) {
		cout << '|' << setw(6) << mas1[i] <<
			'|' << setw(6) << mas2[i] <<
			'|' << setw(6) << mas3[i] << '|' << endl;
	}
	cout << "______________________\n";
	//находим сумму элементов массивов
	int summ1 = 0, summ2 = 0, summ3 = 0;
	for (int i = 0; i < massize; i++) {
		summ1 += mas1[i];
		summ2 += mas2[i];
		summ3 += mas3[i];
	}
	//Определяем большую сумму
	if (summ1 > summ2) {
		if (summ1 > summ3) {
			cout << "Массив 1 больше";
		}
		else {
			cout << "Массив 3 больше";
		}
	}
	else {
		if (summ2 > summ3) {
			cout << "Массив 2 больше";
		}
		else {
			cout << "Массив 3 больше";
		}
		
	}
	
}