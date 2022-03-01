//Bir sayiyi basamaklara ayirarak rastgele sayý atma

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	int toplam = 0;
	int basamak;
	int rastgeleSayi = rand() & 9999 + 1;

	cout << "1 ile 1000 arasinda rastgele sayi: " <<rastgeleSayi;
	cout << endl;
	
	while (rastgeleSayi > 0)
	{
		basamak = rastgeleSayi % 10;
		toplam = toplam + basamak;
		rastgeleSayi /= 10;
	}
	cout << "rastgele uretilen basamaklarin toplami: " << toplam << endl;



	return 0;
}