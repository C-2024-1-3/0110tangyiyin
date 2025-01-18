#include<iostream>
#include<iomanip>
#include"3.3.h"
using namespace std;

double celsius_to_fah(double cel)
{
	return 32 + cel * 1.8;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32) / 1.8;
}


int main()
{
	cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius\n";
	cout << fixed << setprecision(2);
	for (double c = 40.0; c >= 31.0; c -= 1.0)
	{
		double f = celsius_to_fah(c);
		cout << c << "\t" << f << "\t\t|\t";
		double f1 = 120.0 - (40, 0 - c) * 10;
		double c1 = fahrenheit_to_cels(f1);
		cout << f1 << "\t\t" << c1 << endl;
	}
	return 0;
}