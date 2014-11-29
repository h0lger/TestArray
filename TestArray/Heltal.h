#ifndef HELTAL_H
//Klassdefinition f�r Heltal
class Heltal
{
public:
	Heltal(int tal); //Konstruktor
	void SetTal(int tal); //set metod f�r tal
	int GetTal() const; //get metod f�r tal
	bool operator>(const Heltal &right); //st�rre �n
	bool operator<(const Heltal &right); //midre �n



private:
	int tal;
};

#endif // !HELTAL_H
