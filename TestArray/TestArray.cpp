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

	return 0;
}



