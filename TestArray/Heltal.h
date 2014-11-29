#ifndef HELTAL_H
//Klassdefinition för Heltal
class Heltal
{
public:
	Heltal(int tal); //Konstruktor
	void SetTal(int tal); //set metod för tal
	int GetTal() const; //get metod för tal
	bool operator>(const Heltal &right); //större än
	bool operator<(const Heltal &right); //midre än



private:
	int tal;
};

#endif // !HELTAL_H
