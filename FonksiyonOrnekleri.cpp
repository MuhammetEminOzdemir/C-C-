//============================================================================
// Name        : FonksiyonOrnekleri.cpp
// Description : Basit fonksiyon tanimlama ve kullanma ornekleri
//============================================================================

#include <iostream>
using namespace std;

int enBuyuk(int x, int y){
	if(x > y){
		return x;
	}
	return y;
}

int main() {
	int sayi1, sayi2;
	cout << "iki sayi giriniz" << endl;
	cin >> sayi1 >> sayi2;
	cout << "Buyuk olani : " << enBuyuk(sayi1,sayi2) << endl;
	return 0;
}
