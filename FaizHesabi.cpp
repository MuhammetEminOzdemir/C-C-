//============================================================================
// Name        : FaizHesabi.cpp
// Description : Verilen ana para ve faiz degerine gore belirli bir sure
//				boyunca ana paranin nasil degistigini hesaplayan program
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "IDU bank - Hosgeldiniz " << endl;
	cout << "Arasinda bosluk birakarak ana para, faiz(%) ve toplam sure (yil) giriniz" << endl;
	double ana_para, faiz, toplam_yil;
	cin >> ana_para >> faiz >> toplam_yil;
	//Her yil icin faiz hesabi isletip yazdiran dongu
	for(unsigned int yil = 1; yil <=toplam_yil ; yil++){
		ana_para *= 1 + faiz / 100;
		cout << yil << ". yil sonu hesaptaki miktar = " << ana_para << endl;
	}
	cout << "-----------------" << endl;
	return 0;
}
