#include"SýcaklýkDönüþtürücü.h"
#include<iostream>
using namespace std;

int main()
{
	double derece, fahrenhayt,santigrat;

	cout << "Lutfen derece giriniz: ";
	cin >> derece;

	cout << "Santigrat dönüþümü için fahrenhayt degeri giriniz: ";
	cin >> fahrenhayt;

	cout << "fahrenhayt dönüþümü için Santigrat degeri giriniz: ";
	cin >> santigrat;

	SýcaklýkDönüþtürücü fah(derece, fahrenhayt, santigrat);

	cout << "Cel--->>> fah  "<<fah.FahrenhaytHesapla() << endl;
	cout << "Fah--->>> Cel  "<<fah.SantigratHesapla() << endl;

	



	return 0;
}