#include <iostream>
#include <cmath>
using namespace std;
void zadanie2() {
	cout << endl << "��������������� �������������� ��������." << endl;
	double x, k, result;
	cout << "������� x: ";
	cin >> x;
	cout << "������� k: ";
	cin >> k;
	result = sin(tan(2 * 3.14 * x / k));
	if ((result > 0) || (result == 0)) {
		k *= 3;
		cout << "��������� ��������� �����: " << result << ", ��� �� ������������, ��������� k" << endl << "k:= " << k << endl;
		result = sin(tan(2 * 3.14 * x / k));
		cout << "����� ��������� ��������� � ��������� k:= " << result << endl;
	}
	else {
		cout << "��������� ��������� ����� : " << result << ", ��� ������ ����" << endl;
	}
}