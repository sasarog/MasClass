#include "29.h"
#include <iostream>
using namespace std;
void main() {
	setlocale(0 , "Russian");
	{
		Komnata kuhna(15, 65, 12);
		cout << "������� ���� �����  " << kuhna.ploshSOknami();
	}

	system("pause");
}