#include <iostream>
#include <cmath>
using namespace std;
void zadanie1() {
	cout << "Линейные вычислительные процессы." << endl;
	float a, b, z, replacement;
	cout << "Введите А: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	replacement = sqrt((abs(a) + (a + b) * (a + b)) / (a * b));
	z = b * (tan(replacement) + exp(replacement));
	cout << "Z:=" << z << endl;
}