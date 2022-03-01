
//Karakter dizileri kullanilarak string manipülasyonu



/*cin>> kullanarak klavyeden girilen bir string’i bir
karakter dizisinin içine atayabiliriz.

Örnek:
cin >> string1;

Fakat cin>> ile dizinin kapasitesinden fazla
karakterin okunabileceði unutulmamalýdýr.
Fazladan girilen bilgi kaybolacaktýr.

null ile sonlandýrýlmýþ bir string’i temsil eden bir
karakter dizisi cout<< ile ekrana yazdýrýlabilir.*/

#include<iostream>
using namespace std;
int main()
{
	char string[100]; //Max 100 karakter saklayan bir dizi
	char string1[]="Merhaba Hosgeldiniz";
	cout<<string1<<endl;
	
    cout<<"Adinizi soyadinizi giriniz: ",
	cin>>string;
	
	cout<<"Kullanici ismi arasinda bir bosluk\n";
	for(int i=0;i<string[i];i++)
	cout<<string[i]<<" ";
	 
	 
	cout<<endl;
	
	return 0;
}
