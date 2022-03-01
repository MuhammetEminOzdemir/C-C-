/*Klavyeden girilen iki tamsayý kenar bilgisini kullanarak
 yine klavyeden girilen A veya a seçeneði için dikdörtgenin alanýný,
  C veya c seçeneði için de dikdörtgenin çevresini hesaplayýp ekrana yazan programýn C kodunu yazýnýz
   switch-case ile yazýnýz. Diðer tüm seçeneklerde yanlýþ bilgi girildiði bilgisi kullanýcýya verilecektir.*/
   
  #include<stdio.h>
int main()
{
	int a,b,cevre,alan;
	char secim;
	printf("Iki kenar uzunlugu giriniz\n:");
	scanf("%d%d",&a,&b);
	printf("Alan icin A veya a, cevre icin C veya c giriniz:");
	scanf(" %c",&secim);
	switch(secim)
	{
		case 'A':
		case 'a':alan=a*b;
				 printf("Alan=%d",alan);
				 break;
		case 'C':
		case 'c':cevre=2*(a+b);
				 printf("Cevre=%d",cevre);
				 break;
		default:printf("Gecersiz bir secim yaptiniz!");
	}		
	return 0;
}
