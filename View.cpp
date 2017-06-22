#include"View.h"

void View::WyswietlMenu() {
	string imie, nazwisko;
	float punkty;
	char znak = ' ';

	cout << "Ilosc wolnych miejsc na kierunku Automatyka i Robotyka: " << WolneM_AiR() << endl;
	cout << "Ilosc wolnych miejsc na kierunku kierunek2: " << WolneM_Kier2() << endl;
	cout << "Ilosc wolnych miejsc na kierunku kierunek3: " << WolneM_Kier3() << endl;
	/*cout << "Ilosc wolnych miejsc na kierunku $$$$: " << WolneM_$$$$() << endl << endl;*/
	cout << "Ilosc wolnych miejsc na kierunku MBM: " << WolneM_MBM() << endl << endl;
	cout << "___________________________________________________" << endl;

	while (znak != 'n')
	{
		cout << "\nDodac nowego studenta? (t/n) > ";
		cin >> znak;
		system("CLS");
		switch (znak)
		{
		case't':
			cout << "Ilosc wolnych miejsc na kierunku Automatyka i Robotyka: " << WolneM_AiR() << endl;
			cout << "Ilosc wolnych miejsc na kierunku kierunek2: " << WolneM_Kier2() << endl;
			cout << "Ilosc wolnych miejsc na kierunku kierunek3: " << WolneM_Kier3() << endl;
			/*cout << "Ilosc wolnych miejsc na kierunku $$$$: " << WolneM_$$$$() << endl << endl;*/
			cout << "Ilosc wolnych miejsc na kierunku MBM: " << WolneM_MBM() << endl << endl;
			cout << "___________________________________________________" << endl;
			cout << "\nFormularz:\n\nPodaj imie: "; cin >> imie;
			cout << "Podaj nazwisko: "; cin >> nazwisko;
			cout << "Podaj punkty rekrutacyjne: "; cin >> punkty;
			while (cin.fail()) { cin.clear(); cin.ignore(10000, '\n'); cerr << "Bledna wartosc! Wprowadz ponownie: "; cin >> punkty; }
			Dodaj_Studenta(imie, nazwisko, punkty);
			break;
		default:    break;
		}
	}
}

bool View::Zapisz() {
	if (!ZapisDoPliku("studenci.csv")) return 1;
	else return 0;
}
