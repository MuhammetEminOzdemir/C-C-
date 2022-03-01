#include<iostream>
using namespace std;

int main()
{
	//Bir dizinin elemanlarýný toplayan program

	int toplam = 0;
	const int DIZI_BOYUTU = 10; //Buradaki const sabit deðiþken pi gibi
	int i;

	int a[DIZI_BOYUTU] = { 0,10,25,30,40,50,70,80,90,100 };

	for (i = 0; i < 10; i++)
		toplam = toplam + a[i];
	cout << " Elemanlarin Toplami=" << toplam;




	return 0;
}
