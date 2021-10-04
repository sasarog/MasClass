
#include <iostream>
#include <iomanip>
using namespace std;


#define massize 20 //������ ��������
void main() {
	setlocale(0, "russian");
	srand(time(0));
	//���������� ��������
	int mas1[massize];
	int mas2[massize];
	int mas3[massize];
	//���������� ��������
	for (int i = 0; i < massize; i++) {
		mas1[i] = rand() % 30 - 15;
		mas2[i] = rand() % 30 - 15;
		mas3[i] = rand() % 30 - 15;
	}
	//����� �������� �� �����
	cout << "| mas1 | mas2 | mas3 |\n______________________\n";
	for (int i = 0; i < massize; i++) {
		cout << '|' << setw(6) << mas1[i] <<
			'|' << setw(6) << mas2[i] <<
			'|' << setw(6) << mas3[i] << '|' << endl;
	}
	cout << "______________________\n";
	//������� ����� ��������� ��������
	int summ1 = 0, summ2 = 0, summ3 = 0;
	for (int i = 0; i < massize; i++) {
		summ1 += mas1[i];
		summ2 += mas2[i];
		summ3 += mas3[i];
	}
	//���������� ������� �����
	if (summ1 > summ2) {
		if (summ1 > summ3) {
			cout << "������ 1 ������";
		}
		else {
			cout << "������ 3 ������";
		}
	}
	else {
		if (summ2 > summ3) {
			cout << "������ 2 ������";
		}
		else {
			cout << "������ 3 ������";
		}
		
	}
	
}