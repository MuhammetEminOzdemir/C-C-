#include<iostream>
using namespace std;
int main()
{
	const int DIZI_BOYUTU = 100;
	int dizi[DIZI_BOYUTU];
	int eleman,toplam=0;
	cout << "Lutfen dizi eleman sayisini giriniz: ";
	cin >> eleman;
	for (int i = 1; i <= eleman; i++)
	{
		cout << i << ". eleman=";
		cin >> dizi[i];
		toplam += dizi[i];
	}
	cout << endl;
	cout << "Dizi elemanlarinin toplami: " << toplam << endl;

	return 0;
}