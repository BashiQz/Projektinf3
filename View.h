#include <iostream>
#include <cstdlib>
#include "kontroler.h"

using namespace std;

class View {
private:
	kontroler K;
public:
	bool Dodaj_Studenta(string imie, string nazwisko, int punkty) { return K.Dodaj_Studenta(imie, nazwisko, punkty); }
	int WolneM_AiR() { int i = ILOSC_AIR - K.Zwroc_Ilosc_AiR();   return i; }
	int WolneM_Kier2() { int i = ILOSC_KIER2 - K.Zwroc_Ilosc_Kier2();    return i; }
	int WolneM_Kier3() { int i = ILOSC_KIER3 - K.Zwroc_Ilosc_Kier3();   return i; }
	/*int WolneM_$$$$() { int i = ILOSC_$$$$ - K.Zwroc_Ilosc_$$$$();   return i; }*/
	int WolneM_MBM() { int i = ILOSC_MBM - K.Zwroc_Ilosc_MBM();   return i; }
	void WyswietlMenu();
	bool ZapisDoPliku(const char  *sNazwaPliku) { return K.ZapisDoPliku(sNazwaPliku); }
	bool Zapisz();
};
