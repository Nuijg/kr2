#include <iostream>
#include <cmath>
using namespace std;
void zadanie5() {
	cout << endl << "Двумерные массивы" << endl;
	int line, column;
	cout << "Введите колличество строк в массиве: ";
	cin >> line;
	cout << "Введите колличество столбцов в массиве: ";
	cin >> column;
	float** arr = new float* [line];
	for (int i = 0; i < line; i++) {
		arr[i] = new float[column];
	}
	cout << "Заполните массив:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
	cout << "Вы ввели массив:" << endl;
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
	cout << "Сумма равна:= " << sum << endl << "изменненный массив:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << endl;
		}
	}
	for (int i = 0; i < line; i++) {
		delete[] arr[i];
	}
}