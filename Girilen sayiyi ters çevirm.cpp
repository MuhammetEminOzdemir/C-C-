#include<iostream>
using namespace std;

int main(void)
{
	int sayi;
	int yazilacak_sayi;

	cout << "sayiyi giriniz: ";
	cin >> sayi;
	cout << "sayiyinin tersi: ";
	while (sayi > 10)
	{
		yazilacak_sayi = sayi % 10;
		cout << yazilacak_sayi;
		sayi/= 10;
	}
	cout << sayi;

	return 0;
}