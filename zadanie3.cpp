#include <iostream>
#include <cmath>
using namespace std;
void zadanie3() {
	cout << endl << "����������� �������������� ��������" << endl;
	float n, f;
	cout << "������� N: ";
	cin >> n;
	cout << "���� 1" << endl;
	for (int k = -6; k < 4; k++) {
		f = sin(k * 3.14 / n) / (k * 3.14 / n);
		if ((k * 3.14 / n) == 0)
			f = 1;
		cout << "k:= " << k << ";  f(k):= " << f << endl;
	}
	int k = -6;
	cout << "���� 2" << endl;
	while (k < 4)
	{
		f = sin(k * 3.14 / n) / (k * 3.14 / n);
		if ((k * 3.14 / n) == 0)
			f = 1;
		cout << "k:= " << k << ";  f(k):= " << f << endl;
		k++;
	}
	k = -6;
	cout << "���� 3" << endl;
	do
	{
		f = sin(k * 3.14 / n) / (k * 3.14 / n);
		if ((k * 3.14 / n) == 0)
			f = 1;
		cout << "k:= " << k << ";  f(k):= " << f << endl;
		k++;
	} while (k < 4);
}