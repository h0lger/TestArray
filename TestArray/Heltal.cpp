//Implementation av klassen heltal

#include "Heltal.h"

//Konstruktor
Heltal::Heltal(int tal)
{
	SetTal(tal);
}

//Sätter talet
void Heltal::SetTal(int iTal)
{
	tal = iTal;
}

//Hämtar talet
int Heltal::GetTal() const
{
	return tal;
}

//Tal mindre än
bool Heltal::operator<(const Heltal &right)
{
	return tal < right.GetTal();
}

//Tal större än
bool Heltal::operator>(const Heltal &right)
{
	return tal > right.GetTal();
}
