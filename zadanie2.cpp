#include <iostream>
#include <cmath>
using namespace std;
void zadanie2() {
	cout << endl << "Разветвляющиеся вычислительные процессы." << endl;
	double x, k, result;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите k: ";
	cin >> k;
	result = sin(tan(2 * 3.14 * x / k));
	if ((result > 0) || (result == 0)) {
		k *= 3;
		cout << "результат выражения равен: " << result << ", оно не отрицательно, утраиваем k" << endl << "k:= " << k << endl;
		result = sin(tan(2 * 3.14 * x / k));
		cout << "новый результат выражения с утроенной k:= " << result << endl;
	}
	else {
		cout << "результат выражения равен : " << result << ", оно меньше нуля" << endl;
	}
}