

//Bankamatik uygulamasý kullancý bilgilerini isteyerek 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char isim[5] = "ali"; //Burada kulanýcýnýn ismini ve parolasýný giriyoruz ki bankaya girerken yanlýþ parola girilince iþlem yapýlmasýn diye
	int parola = 1234;
	int bakiye = 100;
	int secim;
	int yatirilacak_para;
	int cekilecek_para;

	char istenicek_isim[100];
	int istenicek_parola;

	printf("Bankamatige hosgeldiniz :) \n\nLutfen isminizi giriniz:");  //Bu 4 satýrda müsteri isim ve parolasýný girmesini istedik
	scanf_s("%s", &istenicek_isim, sizeof(istenicek_isim)); //Normalde sizeof olmasýne gerek yok faat vs code sntax hatasý verdiði için kullanmak zorundayýz 
	printf("Lutfen sifrenizi giriniz:");
	scanf_s("%d", &istenicek_parola);

	if (strcmp(isim, istenicek_isim) == 0 && istenicek_parola == parola) //Burada strcmp komutu kýsayoldur yani isim ile alýnacak ismi karsýlaþtýrýp ayný ise iþleme devam ediyor
	{
		printf("\nBasarili bir sekilde giris saglanmistir:\n\n");
		printf("Lutfen isleminizi seciniz :)\n1-) Para Yatirma\n2-)Para cekme\n3-) Kullanici bilgileri\n");
		scanf_s("%d", &secim);

		if (secim == 1)
		{
			printf("Lutfen paranizi yatiriniz:");
			scanf_s("%d", &yatirilacak_para);
			bakiye = bakiye + yatirilacak_para;
			printf("Paraniz basarili bir sekilde yatirilmistir\nYatirdiginiz para=%d\nGuncel bakiyeniz=%d", yatirilacak_para, bakiye);
		}
		else if (secim == 2)
		{
			printf("Cekilecek para miktarini giriniz:");
			scanf_s("%d", &cekilecek_para);
			bakiye = bakiye - cekilecek_para;
			printf("Paraniz basarili bir sekilde ceilmistir\ncektiginiz para=%d\nGuncel bakiyeniz=%d", cekilecek_para, bakiye);
		}
		else if (secim == 3)
		{
			printf("Kullanici arayuzune hosgeldiniz :)\n");
			printf("Kullanici adiniz:%s\nKullanici sifreniz:%d\nHesabinizdaki bakiye=%d\n\n\n", isim, parola, bakiye);
		}
		else
			printf("Yanlis secim yaptiniz lutfen tekrar giriniz:\n\n");
	}
	else
	{
		printf("isim veya sifre yanlis girilmistir\n\nLutfen tekrar deneyiniz");
	}







	return 0;
}