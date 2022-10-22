#include <iostream>
using namespace std;
int main() {
	//Series1?.Даны десять вещественных чисел.Найти их сумму.
	/*double x, sum = 0;
	int i = 1;
	while (i <= 10) {
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum;*/
	//Series2.Даны десять вещественных чисел.Найти их произведение.
	/*double a = 1, b;
	for (int i = 1; i <= 10; i+=1) {
		cin >> b;
		a *= b;// a= a*b;
    }
	cout << a;*/
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	double a = 1, sum = 0;
	int i = 1;
	while (i <= 10) {
		a = sum / 10;
		cin >> a;
	}
	cout << a;




}