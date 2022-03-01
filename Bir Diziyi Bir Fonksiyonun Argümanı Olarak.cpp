#include<iostream>
#include<iomanip>
using namespace std;

//Bir Diziyi Bir Fonksiyonun Argümaný Olarak Kullanma
void DiziyiDegistir(int [],int);
int main()
{
	const int DIZI_BOYUTU=5;
	int a[DIZI_BOYUTU]={0,1,2,3,4};//diziye ilk degerler ata
	
	cout<<"Fonksiyon referan ile gonderilmeden once dizinin icerigi:\n";
	for(int i=0;i<DIZI_BOYUTU;i++)
	cout<<setw(2)<<a[i];
	cout<<endl;
	
	
	DiziyiDegistir(a,DIZI_BOYUTU);
	cout<<"Fonskiyon ile degistirilmis dizininin icerigi:\n";
	for(int j=0;j<DIZI_BOYUTU;j++)
	cout<<setw(2)<<a[j];
	cout<<endl;

	return 0;
}
void DiziyiDegistir(int b[],int dizininBoyutu)
{
	for(int k=0;k<dizininBoyutu;k++)
	b[k]*=2;
	
}
