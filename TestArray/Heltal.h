#ifndef HELTAL_H
//Klassdefinition för Heltal
class Heltal
{
public:
	Heltal(int tal); //Konstruktor
	void SetTal(int tal); //set metod för datamedlem
	//TODO: Överlagring av operatorer < och >


private:
	int tal;
};

#endif // !HELTAL_H
