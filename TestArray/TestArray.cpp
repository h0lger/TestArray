#include "Array.h"
#include <assert.h>



int main()
{	
	//Vi kör först lite enhetstester
	Heltal t1(1);
	//Jag har initierat med tal 1 därför ska värdet vara detsamma
	assert(t1.GetTal() == 1);
	t1.SetTal(88);
	//Nu har vi ändrat värdet genom set metoden och värdet ska istället vara 88
	assert(t1.GetTal() == 88);
	Heltal t2(10);
	//Test av <> operatorer
	assert(t1 > t2); //88 > 10
	assert(t2 < t1); //10 < 88

	//Test av initiering av array
	int def_arr_size = DEFAULT_ARRAY_SIZE;
	Array *a1 = new Array(); //Testar med standardstorlek	
	assert(a1->Count() == def_arr_size);
	delete a1;
	a1 = new Array(55); //Testa med egenvald storlek
	assert(a1->Count() == 55);
	delete a1;

	//Testa utskrift av array	
	int storlek, min, max;
	cout << "Ange vilken arraystorlek:\n";
	cin >> storlek;
	a1 = new Array(storlek);
	cout << "Ange minsta slumptal:\n";
	cin >> min;
	cout << "Ange största slumptal:\n";
	cin >> max;
	//Slumpa tal mellan min och max
	a1->SlumpGen(min, max);
	//Utskrift efter slumptalsgenerator
	std::cout << "Arrayn innehåller nu:\n";
	a1->PrintArray();
	//Utskrift efter sortering
	cout << "Efter sortering:\n";
	a1->Sort();
	a1->PrintArray();

	return 0;
}



