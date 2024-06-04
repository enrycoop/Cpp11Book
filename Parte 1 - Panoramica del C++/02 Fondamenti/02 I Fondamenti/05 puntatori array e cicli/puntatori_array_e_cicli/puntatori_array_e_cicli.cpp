// puntatori_array_e_cicli.cpp : Defines the entry point for the application.
//

#include "puntatori_array_e_cicli.h"
#include <vector>

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

void increment()
{
	int v[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto& x : v) {
		++x;
	}
	for (auto x : v) {
		cout << x << ' ';
	}

	cout << endl;

}

int count_x(char* p, char x)
// conta il numero di occorrenze di x in p[]
{
	if (p == nullptr) return 0;
	int count = 0;
	for (; *p != '\0'; ++p) {
		if (*p == x) {
			++count;
		}
	}
	return count;
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
	increment();

	/*
	T a[n];    // T[n]: arrayi di n T
	T* p;      // T*: puntatore a T
	T& p;      // T&: riferimento a T
	T f(A);    // T(A): funzione che accetta un argomento di tipo A restituendo un risultato di tipo T
	//Cerchiamo di garantire che un puntatore punti sempre a un oggetto, in modo che la sua
	dereferenziazione sia valida. 
	Esiste un nullptr condiviso da tutti i tipi di puntatore.
	*/
	double* pd = nullptr;
	vector<int>* lst = nullptr;
	// int x = nullptr; errore x non è un puntatore ad un intero.
	char saluto[]{ "ciaoooooo cia cia cia" };
	cout << "count: " << count_x(saluto, 'c') << endl;


	return 0;
}
