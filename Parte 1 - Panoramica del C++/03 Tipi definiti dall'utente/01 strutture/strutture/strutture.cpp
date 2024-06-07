// strutture.cpp : Defines the entry point for the application.
//

#include "strutture.h"

using namespace std;

struct Vector {
	int sz;        // numero di elementi
	double* elem;  // puntatori a elementi
};

void vector_init(Vector& v, int s)
{
	// l'operatore new alloca memoria prendendola da un'area chiamata memoria dinamica (o heap)
	v.elem = new double[s]; // alloca un array di s double
	v.sz = s;
}

double read_and_sum(int s)
// legge s interi da cin e restituisce la loro somma; si presuppone che s sia positivo
{
	Vector v;
	vector_init(v, s);              // alloca s elementi per v
	for (int i = 0; i != s; ++i) {
		cin >> v.elem[i];             // legge negli elementi
	}

	double sum = 0;
	for (int i = 0; i != s; ++i) {
		sum += v.elem[i];             // legge negli elementi
	}

	return sum;
}

void f(Vector v, Vector& rv, Vector* pv) {
	int i1 = v.sz;    // accesso tramite nome
	int i2 = rv.sz;   // accesso tramite riferimento
	int i4 = pv->sz;  // accesso tramite puntore
}

int main()
{
	cout << read_and_sum(5);
	return 0;
}
