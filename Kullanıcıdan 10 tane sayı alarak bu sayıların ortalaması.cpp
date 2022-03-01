#include <iostream>
using namespace std;
int main()
{
	int toplam=0,ortalama;
	int sayi;
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   for(int i=1;i<=10;i++)
   {
   cout<<i<<"sayiyi Girin : ";
   cin>>sayi;
   	toplam=toplam+sayi;
   }
   ortalama=toplam/10;
   cout<<"Girilen 5 sayının ortalama: "<<ortalama;
}