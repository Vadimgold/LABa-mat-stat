#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
double a = 6.2, b = 15.1;//интервал

double f(double x)
{
	return (2.5 * x * x - 0.1) / (log(x) + 1);
}
void Sign()
{
	int signs;
	cout << "Введите кол-во знаков после запятой";
	cin >> signs;
	cout << fixed << setprecision(signs);
}
void NwtCot()
{
	int n = 5;
	int arr[6] = { 19, 75, 50, 50, 75, 19};
	double res = 0, h = 0, x = a, kff = (5.0 / 288.0);
	h = (b - a) / n;
	for (int i = 0; i <= n; i++, x += h)
		res += arr[i] * f(x);
	cout << "Ответ\n" << kff * h * res << endl;
}
int main() 
{
	setlocale(LC_ALL, "Russian");
	Sign();
	NwtCot();
}