#include<iostream> // cout kullanımı için gereklidir çıkış verisini ekrana getirmek için izin verir.
using namespace std;

int main()
{
int sayi1,sayi2,toplam;

cout<<"Birinci sayiyi giriniz:";
cin>>sayi1; //kullanıcıdan sayi alma c deki scanf fonksiyonu gibi
cout<<"ikinci sayiyi giriniz:";
cin>>sayi2;  // Girilen sayiyi sayi 2 e atadı. cin>>sayi1>>sayi2 böylede yapılabilir.

toplam=sayi1+sayi2;
cout<<"Girdiginiz sayilarin toplami="<<toplam<<endl<<endl; //Ekrana toplamı yazdır. !!!BU SATIRDAKİ endl KOMUTU \n İLE AYNIDIR BİR ALT SATIRA GEÇİP TOPLAM SONUCU GÖSTERİR YAZILMAZSA HATA VERİR.
                                         //Ne kadar "endl" koyarsan o kadar aşağı satıra iner.
    return 0;   
}
