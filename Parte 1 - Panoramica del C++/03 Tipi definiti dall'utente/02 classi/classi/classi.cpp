// classi.cpp : Defines the entry point for the application.
// 
// Fondamentalmente l'oggetto Vector e` un handle che include un puntatore agli elementi (elem)
// piu` il numero degli elementi (sz). Questa e` la tecnica di base del C++ per gestire quantita`
// variabili di informazioni: un handle di dimensione fissa che fa riferimento a una quantita` di
// dati variabile "altrove" (per esempio nella memoria dinamica allocata da new).
//

#include "classi.h"

using namespace std;

class Vector {
public:
	Vector(int s) :elem{new double[s]}, sz{s} {}  // costruisce un Vector
	double& operator[](int i) { return elem[i]; } // accesso agli elementi: indicizzazione
	int size() { return sz; }
private:
	double* elem;                                 // puntatore agli elementi
	int sz;                                       // il numero di elementi
};


double read_and_sum(int s)
{
	Vector v(s);
	for (int i = 0; i != v.size(); ++i) {
		cin >> v[i];             
	}

	double sum = 0;
	for (int i = 0; i != v.size(); ++i) {
		sum += v[i];             
	}

	return sum;
}


int main()
{
	cout << read_and_sum(6);
	return 0;
}
