//5 adet öðrencinin 4 farklý dersten aldýklarý baþarý notlarýný bir tablo halindeverilmiþ olup
// bu tabloyu bir dizi içerisinde yükleyerek en düþük ve en yüksek notlarý bulan program

#include<iostream>
#include<cstdlib>
#define ogrSayi 5
#define  dersSayi 4
using namespace std;

int enYuksekBul(int[][dersSayi], int, int);
int enDusukBul(int[][dersSayi], int, int);
int main()
{
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter
	int notlar[ogrSayi][dersSayi];
	cout << "Lutfen ders notlarini giriniz: " << endl;

	for (int i = 0; i < ogrSayi; i++)
	{
		for (int j = 0; j < dersSayi; j++)
		{
			cin >> notlar[i][j];
		}
	}
	cout << endl;
	cout << "\t\t\t----Dersler------" << endl<<endl;
	cout << "Öðrenci No" << "\tMATEMATÝK\t" << "FÝZÝK\t" << "\tTÜRKÇE\t" << "\tKÝMYA" << endl; 
	//sonra notlarý yazdýralým tablo halinde 
	for (int i = 0; i < ogrSayi; i++)
	{
		cout << i + 1 << "\t\t ";
		for (int j = 0; j < dersSayi; j++)
		{
			cout << notlar[i][j] << "\t\t";
		}
		cout << endl;
	}
	cout << endl;
	int enYuksek, enDusuk;
	enYuksek=enYuksekBul(notlar, ogrSayi, dersSayi);
	cout << "En yuksek not=" << enYuksek << endl;
	enDusuk=enDusukBul(notlar, ogrSayi, dersSayi);
	cout << "En dusuk not=" << enDusuk << endl;

	return 0;
}
int enYuksekBul(int a[][dersSayi],int satir,int sutun)
{ 
	int en_yuk = a[0][0];
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			if (a[i][j] > en_yuk)
				en_yuk = a[i][j];
		}
	}
	return en_yuk;
}
int enDusukBul(int a[][dersSayi], int satir, int sutun)
{
	int en_dus = a[0][0];
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			if (a[i][j] < en_dus)
				en_dus = a[i][j];
		}
	}
	return en_dus;

}