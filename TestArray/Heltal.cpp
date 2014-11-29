//Implementation av klassen heltal

#include "Heltal.h"

//Konstruktor
Heltal::Heltal(int tal)
{
	SetTal(tal);
}

//S�tter talet
void Heltal::SetTal(int iTal)
{
	tal = iTal;
}

//H�mtar talet
int Heltal::GetTal() const
{
	return tal;
}

//Tal mindre �n
bool Heltal::operator<(const Heltal &right)
{
	return tal < right.GetTal();
}

//Tal st�rre �n
bool Heltal::operator>(const Heltal &right)
{
	return tal > right.GetTal();
}
