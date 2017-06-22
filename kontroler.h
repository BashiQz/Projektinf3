#include <iostream>
#include"kierunki.h"
#include <memory>
#include<list>
#include<vector>
#include <fstream>

using namespace std;

class kontroler {
private:
	list<shared_ptr<kierunek>> Lista_Studentow;

public:
	int Zwroc_Ilosc_AiR();
	int Zwroc_Ilosc_Kier2();
	int Zwroc_Ilosc_Kier3();
	/*int Zwroc_Ilosc_$$$$();*/
	int Zwroc_Ilosc_MBM();
	bool Dodaj_Studenta(string imie, string nazwisko, int punkty);
	bool WskStud(float a, string b, string c);
	void ZapisDoStrumienia(ostream& StrmWy);
	bool ZapisDoPliku(const char  *sNazwaPliku);
};
