//============================================================================
// Name        : HaddiniAsanProgram.cpp
// Description : Kullaniciya maasini sorup yorum yapan program
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double maas;
	cout << "Hey dostum, senin maasin ne kadar?" << endl;
	cin >> maas;
	if(maas>=10000){
		cout << "Zenginmissin sen, kahveleri sen ismarla" << endl;
	}
	if(maas<10000){
		cout << "Biraz C++ calis da maasi yuksek bir is bul" << endl;
	}
	//Yukaridaki kodu if-else yapisiyla tekrar yaziniz
	return 0;
}
