#include<iostream>
using namespace std;
int main()
{
  
int sayac,puan; //girilen notların sayısı ve girilen notların değişkenleri
   float notortalama,toplam;
   toplam=0; //girilen notların toplamı başlanğıçta 0
   sayac=0;

while(puan != -1)//Bitiş Değeri=-1
{
toplam=toplam+puan;
sayac=sayac+1;
cout<<"Notu Gir ya da -1 Yazarak Cik: ";
cin>>puan;
}

notortalama=toplam/sayac;
cout<<"Sinif ortalamasi "<<notortalama<<endl;

    return 0;
}