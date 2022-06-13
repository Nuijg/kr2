#include <iostream>
#include <cmath>
using namespace std;
void zadanie4() {
	cout << endl << "Одномерные массивы." << endl;
	cout << "введите колличество элементов в массиве: ";
	int n;
	cin >> n;
	float* arr = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]= ";
		cin >> arr[i];
	}
	cout << "вы ввели:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]= " << arr[i] << endl;
	}
	float max = arr[0], min = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	float Sr = (max + min) / 2;
	for (int i = 0; i < n; i++) {
		if (arr[i] < Sr)
			arr[i] *= arr[i];
	}
	cout << "max:= " << max << ";  min:= " << min << endl;
	cout << "Sr:= " << Sr << endl << "измененный массив:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]= " << arr[i] << endl;
	}
	delete[] arr;
}