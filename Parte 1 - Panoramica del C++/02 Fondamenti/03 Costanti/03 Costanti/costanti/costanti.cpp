// costanti.cpp 
// Il C++ supporta due concetti di immutabilità:
// const: significa all'incirca "prometto di non cambiare questo valore". Il compilatore fa valere la promessa.
// constexpr: significa all'incirca "da valutare al momento della compilazione"
//

#include "costanti.h"

using namespace std;

constexpr double square(double x) { return x * x; } // espressione costante
double sum(const vector<double>&); // sum non modificherà il suo argomento

int main()
{
	const int dmv = 17;                        // costante con nome
	int var = 17;                              // variabile
	constexpr double max1 = 1.4 * square(dmv); // Ok se square è un espressione costante
	vector<double> v{ 1.2, 4.5, 3.4 };         // non costante
	const double s1 = sum(v);                  // OK: da valutare in fse di esecuzione

	cout << s1;
	return 0;
}

double sum(const vector<double>& v) {
	double somma = 0;
	for (auto i : v) {
		somma += i;
	}
	return somma;
}