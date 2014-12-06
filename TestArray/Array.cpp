//Implementation av klassen Array

#include "Array.h"
#include <stdlib.h> //rand
#include <time.h>


//Konstruktorer
Array::Array()
{
	//Sätter standardstorleken
	size = DEFAULT_ARRAY_SIZE;
	Initiera();
}

Array::Array(int iSize)
{
	//Valfri storlek sätts
	size = iSize;
	Initiera();
}

//Dekonstruktor
Array::~Array()
{
	//frigör minne
	delete _arrPtr;
}

//Privata metoder

void Array::Initiera()
{
	//Allokera minne för arrayn
	_arrPtr = new Heltal[size];
	//Initiera random func
	srand((unsigned int)time(0));
}

void Array::QuickSort(int first, int last)
{
	int low = first;
	int high = last;
	Heltal x = _arrPtr[(first + last) / 2];

	// Välj mittvärdet som pivotelement
	do
	{
		// Gå från början och sök första värdet som är större än x
		while (_arrPtr[low] < x) { low++; }
		// Gå från slutet och sök första värdet som är mindre än x
		while (_arrPtr[high] > x){ high--; }

		if (low <= high)
		{			
			Swap(low, high);
			low++;
			high--;
		}
	} while (low <= high); // Loopa genom vektorn medan low <= high

	// Rekursion
	// "Sortera" vänster halva om high inte nått vektorns första element
	if (first < high) QuickSort(first, high);
	// "Sortera" höger halva om low inte nått vektorns sista element
	if (low < last) QuickSort(low, last);
}

void Array::Swap(int a, int b)
{
	Heltal t1 = _arrPtr[a]; //mellanlagra
	_arrPtr[a] = _arrPtr[b];
	_arrPtr[b] = t1;
}

//Publika metoder

int Array::Count()
{
	return size;
}

void Array::SlumpGen(int min, int max)
{	
	int randTal = 0; //används för slumpmässigt tal
	for (int i = 0; i < size; i++)
	{
		randTal = rand() % (max - min) + min;
		_arrPtr[i].SetTal(randTal);
	}
}

void Array::PrintArray()
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << _arrPtr[i].GetTal() << "\n";
	}
}

void Array::Sort()
{
	QuickSort(0, (size - 1));
}