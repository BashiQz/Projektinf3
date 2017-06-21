#include"kontroler.h"

int kontroler::Zwroc_Ilosc_AiR() {
	int iloscAiR = 0;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "Automatyka i Robotyka") { iloscAiR++; }
	}
	return iloscAiR;
}
int kontroler::Zwroc_Ilosc_Kier2() {
	int iloscKier2 = 0;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "kierunek2") { iloscKier2++; }
	}
	return iloscKier2;
}
int kontroler::Zwroc_Ilosc_Kier3() {
	int iloscKier3 = 0;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "kierunek3") { iloscKier3++; }
	}
	return iloscKier3;
}

bool kontroler::Dodaj_Studenta(string imie, string nazwisko, int punkty) {
	list<std::shared_ptr<kierunek>>::iterator it2;
	float najmniejszy = punkty;
	float a;
	string b, c;

	if (Zwroc_Ilosc_AiR()<ILOSC_AIR)
	{
		Lista_Studentow.push_back(make_shared<AiR>(AiR(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: Automatyka i Robotyka.\n";
		return true;
	}

	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "Automatyka i Robotyka")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<AiR>(AiR(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: Automatyka i Robotyka.\n";
		WskStud(a, b, c);
		return true;
	}

	if (Zwroc_Ilosc_Kier2()<ILOSC_KIER2)
	{
		Lista_Studentow.push_back(make_shared<kierunek2>(kierunek2(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: kierunek2.\n";
		return true;
	}
	najmniejszy = punkty;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "kierunek2")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<kierunek2>(kierunek2(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: kierunek2.\n";
		WskStud(a, b, c);
		return true;
	}

	if (Zwroc_Ilosc_Kier3()<ILOSC_KIER3)
	{
		Lista_Studentow.push_back(make_shared<kierunek3>(kierunek3(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: kierunek3.\n";
		return true;
	}
	najmniejszy = punkty;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "kierunek3")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<kierunek3>(kierunek3(imie, nazwisko, punkty)));
		cout << "Zakwalifikowano na kierunek: kierunek3.\n";
		WskStud(a, b, c);
		return true;
	}
	cout << "Nie zakwalifikowano na zaden kierunek.\n";
	return false;
}

bool kontroler::WskStud(float a, string b, string c) {
	list<std::shared_ptr<kierunek>>::iterator it2;
	float najmniejszy = a;
	float punkty = a;
	string imie = b;
	string nazwisko = c;

	if (Zwroc_Ilosc_AiR()<ILOSC_AIR)
	{
		Lista_Studentow.push_back(make_shared<AiR>(AiR(imie, nazwisko, punkty)));
		return true;
	}

	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "Automatyka i Robotyka")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<AiR>(AiR(imie, nazwisko, punkty)));
		WskStud(a, b, c);
		return true;
	}

	if (Zwroc_Ilosc_Kier2()<ILOSC_KIER2)
	{
		Lista_Studentow.push_back(make_shared<kierunek2>(kierunek2(imie, nazwisko, punkty)));
		return true;
	}
	najmniejszy = punkty;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "kierunek2")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<kierunek2>(kierunek2(imie, nazwisko, punkty)));
		WskStud(a, b, c);
		return true;
	}

	if (Zwroc_Ilosc_Kier3()<ILOSC_KIER3)
	{
		Lista_Studentow.push_back(make_shared<kierunek3>(kierunek3(imie, nazwisko, punkty)));
		return true;
	}
	najmniejszy = punkty;
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->PobierzPunkty()<najmniejszy && (*it)->ZwrocNazwe() == "kierunek3")
		{
			najmniejszy = (*it)->PobierzPunkty();
			it2 = it;
		}
	}
	if (najmniejszy<punkty)
	{
		a = (*it2)->PobierzPunkty();
		b = (*it2)->PobierzImie();
		c = (*it2)->PobierzNazwisko();
		Lista_Studentow.erase(it2);
		Lista_Studentow.push_back(make_shared<kierunek3>(kierunek3(imie, nazwisko, punkty)));
		WskStud(a, b, c);
		return true;
	}
	return false;
}

void kontroler::ZapisDoStrumienia(ostream& StrmWy) {
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "Automatyka i Robotyka") { (*it)->Wypisz(StrmWy); }
	}
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "kierunek2") { (*it)->Wypisz(StrmWy); }
	}
	for (list<std::shared_ptr<kierunek>>::iterator it = Lista_Studentow.begin(); it != Lista_Studentow.end(); it++)
	{
		if ((*it)->ZwrocNazwe() == "kierunek3") { (*it)->Wypisz(StrmWy); }
	}
}

bool kontroler::ZapisDoPliku(const char  *sNazwaPliku) {
	ofstream  StrmPlikowy;

	StrmPlikowy.open(sNazwaPliku);
	if (!StrmPlikowy.is_open()) {
		cerr << "Operacja otwarcia do zapisu \"" << sNazwaPliku << "\"" << endl
			<< "nie powiodla sie." << endl;
		return false;
	}

	ZapisDoStrumienia(StrmPlikowy);

	StrmPlikowy.close();
	return !StrmPlikowy.fail();
}
