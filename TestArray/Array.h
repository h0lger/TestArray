#include "Heltal.h"
#include <iostream>

#ifndef ARRAY_H
#define DEFAULT_ARRAY_SIZE 10;
using namespace std;

class Array
{
	

public:
	//Konstruktor specifikt
	Array(); //default konstruktor
	Array(int iSize); //konstruktor med definierat antal element	
	~Array(); //dekonstruktor	
	

	//Metoder	
	void SlumpGen(int min, int max); //generera slumpmässiga tal till array
	void Sort(); //quicksort
	int Count(); //returnerar antalet element i arrayn
	void PrintArray(); //Skriver ut samtliga värden i arrayn	

private:
	//Variabler
	Heltal *_arrPtr; //Pekare till array
	int size; //ska hålla antalet element
	void Initiera(); //initierar klassen
	void QuickSort(int first, int last);
	void Swap(int a, int b);

};


#endif // !ARRAY_H
