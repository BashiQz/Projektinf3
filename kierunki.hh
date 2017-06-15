#include <iostream>
#include<string>
#define ILOSC_AIR 2
#define ILOSC_KIER2 2
#define ILOSC_KIER3 5

using namespace std;

class kierunek{
private:
    int ilosc_miejsc;
    string nazwa;
    string imie;
    string nazwisko;
    float punkty;
public:
    void PrzypiszCechy(string nazwa_kierunku, int ilosc, float pkty , string imieS, string nazwiskoS){
        nazwa=nazwa_kierunku;
        ilosc_miejsc=ilosc;
        punkty=pkty;
        imie=imieS;
        nazwisko=nazwiskoS;
        };
    string ZwrocNazwe(){return nazwa;}
    float PobierzPunkty(){return punkty;}
    string PobierzImie(){return imie;}
    string PobierzNazwisko(){return nazwisko;}
    virtual void Wypisz(ostream& StrmWy){};
};

class AiR:public kierunek{
private:

public:
    AiR(string imie, string nazwisko,float punkty){PrzypiszCechy("Automatyka i Robotyka", ILOSC_AIR, punkty , imie,nazwisko);};
    void Wypisz(ostream& StrmWy);
};
class kierunek2:public kierunek{
private:

public:
    kierunek2(string imie, string nazwisko,float punkty){PrzypiszCechy("kierunek2", ILOSC_KIER2, punkty, imie,nazwisko);};
    void Wypisz(ostream& StrmWy);
};
class kierunek3:public kierunek{
private:

public:
    kierunek3(string imie, string nazwisko,float punkty){PrzypiszCechy("kierunek3", ILOSC_KIER2, punkty, imie,nazwisko);};
    void Wypisz(ostream& StrmWy);
};
