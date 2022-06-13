#include <iostream>
#include <cmath>
using namespace std;
void zadanie5() {
	cout << endl << "��������� �������" << endl;
	int line, column;
	cout << "������� ����������� ����� � �������: ";
	cin >> line;
	cout << "������� ����������� �������� � �������: ";
	cin >> column;
	float** arr = new float* [line];
	for (int i = 0; i < line; i++) {
		arr[i] = new float[column];
	}
	cout << "��������� ������:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
	cout << "�� ����� ������:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << endl;
		}
	}
	float sum = 0;
	int transfer;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			transfer = arr[i][j];
			if ((arr[i][j] > 0) && (transfer % 3 != 0)) {
				sum += arr[i][j];
			}
		}
	}
	for (int i = 0; i < line; i++) {
		if (arr[i][column - 1] < 0) {
			arr[i][column - 1] = sum;
		}
	}
	cout << "����� �����:= " << sum << endl << "����������� ������:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << endl;
		}
	}
	for (int i = 0; i < line; i++) {
		delete[] arr[i];
	}
}