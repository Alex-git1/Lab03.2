// Lab_03_2.cpp
// < ��������� ��������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 13

#include <iostream>

using namespace std;
int main() {
	double a, b, c, x, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ���������� ����
    if (x - 1 < 0 && b - x != 0) {
		F = a * x * x + b;
    }
	if (x - 1 > 0 && b + x == 0) {
		F = (x - a) / x;
	}
	if ((!(x - 1 < 0 && b - x != 0) && !(x - 1 > 0 && b + x == 0))) {
		F = x / c;
	}
	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ������ ����
	if (x - 1 < 0 && b - x != 0) {
		F = a * x * x + b;
	}
	else if (x - 1 > 0 && b + x == 0) {
		F = (x - a) / x;
	}
	else
		F = x / c;

	cout << "2) F = " << F << endl;
	return 0;
}

