//============================================================================
// Name        : Parola.cpp
// Description : Do-while ornegi olarak parola girisi yaptiran program
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string parola = "goygoy", giris;
	do{
		cout << "Parolayi yaziniz: ";
		cin >> giris;
	}while(giris!=parola);
	cout << "Parola dogru, girebilirsiniz ";
	return 0;
}
