#include "Student.h"
#include <time.h>
#include <math.h>
using namespace std;

void main() {
	srand(time(0));
	setlocale(0, "Russian");
	Student vova;
	vova.sluch();
	vova.vivod();
	cout << "������� ������ �������� �����  " << vova.srball();
	cout << "\n���� �����  " << round(vova.srball());
}