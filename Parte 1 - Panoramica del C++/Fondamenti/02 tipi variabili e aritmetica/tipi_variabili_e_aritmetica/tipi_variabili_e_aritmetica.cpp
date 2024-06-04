// tipi_variabili_aritmetica.cpp : 
/*
 Tutti i nomi e le espressioni hanno un tipo che determina le operazioni eseguibili.
 Una dichiarazione è un'ístruzione che introduce un nome nel programma e secifica un tipo per l'entità con nome:
 - Un tipo definisce un set di possibili valori e uno di possibili operazioni (per un oggetto).
 - Un oggetto è una porzione di memoria che contiene un valore di qualche tipo.
 - Un valore è un set di bit interpretati in base a un tipo.
 - Una variabile è un oggetto con un nome.

 Il C++ offre svariati tipi fondamentali. Per esempio:
	 bool   | |
	 char   | |
	 int    | | | | |
	 double | | | | | | | | |
 Una variabile char è della dimensione naturale adatta a contenere un carattere su
 una data macchina (solitamente un byte di 8 bit).
 La dimensione di un tipo è definita dallímplementazione (cioè, può variare a seconda della macchina)
 e può essere ottenuta tramite l'operatore zieof.
*/

#include "tipi_variabili_e_aritmetica.h"

using namespace std;

int main()
{
	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "double: " << sizeof(double) << endl;


	double d1 = 2.3;
	double d2{ 2.3 };

	complex<double> z = 1;
	complex<double> z2{ d1, d2 };
	complex<double> z3 = { 1, 2 };
	cout << "z2: " << z2 << endl;

	vector<int> v{ 1,2,3,4,5,6 };
	cout << "vector: " << v[1] << endl;

	// Per evitare conversioni con perdita di informazione
	// (narrowing conversion) usare inizializzazione di lista {}
	int i = 7.2;
	cout << "i: " << i << endl;
	/*int i2{ 7.2 };
	cout << "i2: " << i2 << endl;
	int i3 = { 7.2 };
	cout << "i3: " << i3 << endl;*/

	// nella definizione di una variabile, non è necessario dichiararei il tipo 
	// quando è possibile dedurlo dall'inizializzazione.
	auto b = true;
	auto ch = 'x';
	auto integer = 123;

	return 0;
}
