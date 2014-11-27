#include "Heltal.h"

#ifndef ARRAY_H
#define DEFAULT_ARRAY_SIZE = 99;

class Array
{
public:
	//Konstruktor specifikt
	Array(); //default konstruktor
	Array(int size); //konstruktor med definierat antal element
	~Array(); //dekonstruktor

	//Metoder	
	void SlumpGen(int min, int max); //generera slumpmässiga tal till array
	void Sort(); //quicksort
	int Count(); //returnerar antalet element i arrayn
	void PrintArray(); //Skriver ut samtliga värden i arrayn

private:
	//Variabler
	Heltal *arrPtr; //Pekare till array
	int size; //ska hålla antalet element

};
#endif // !ARRAY_H
