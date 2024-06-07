// enumerazioni.cpp : Defines the entry point for the application.
// C++ supporta una forma semplice di tipo definito dall'utente per la quale e` possibile 
// enumerare i valori.
//

#include "enumerazioni.h"

using namespace std;
// Per default per un'enum class vengono definiti solo assegnamento, inizializzazione e confronti.
enum class Color { red, blue, green };
enum class TrafficLight { green, yellow, red };
// tuttavia essendo definito dall'utente possiamo definire degli operatori

static TrafficLight& operator++(TrafficLight& t)
// incremento prefisso: ++
{
	switch (t) {
	case TrafficLight::green: return t = TrafficLight::yellow;
	case TrafficLight::yellow: return t = TrafficLight::red;
	case TrafficLight::red: return t = TrafficLight::green;
	}
}


int main()
{

	Color col = Color::red; 
	TrafficLight light = TrafficLight::red;
	TrafficLight next = ++light;
	//cout << col << endl;
	return 0;
}
