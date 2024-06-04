// puntatori_array_e_cicli.cpp : Defines the entry point for the application.
//

#include "puntatori_array_e_cicli.h"

using namespace std;

void copy_fct()
{
	int v1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int v2[10];                           // diventera` una copia di v1

	for (auto i = 0; i != 10; ++i) {
		v2[i] = v1[i];
	}
}

void print()
{
	int v[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (auto x : v) {
		cout << x << '\n';
	}

	for (auto x : {10, 21, 32, 43, 54, 65}) {
		cout << x << '\n';
	}
}

int main()
{
	/* Nelle dichiarazioni, [] significa array di e * significa "puntatore a".
	Tutti gli array hanno 0 come limite minimo, quindi v ha sei elementi, da v[0] a v[5].
	Una variabile puntatore puo` contenere l'indirizzo di un oggetto del tipo appropriato.*/
	char v[6]; // array di 6 caratteri

	char* p = &v[3]; // puntatore a 4 elemento di v
	/*
	       p:| |
			      |
					  v
	v: | | | | | | |
	*/

	print();
	return 0;
}
