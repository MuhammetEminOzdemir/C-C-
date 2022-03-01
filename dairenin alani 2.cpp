/*Klavyeden girilen iki tamsayý kenar bilgisini kullanarak
 yine klavyeden girilen 1 seçeneði için dikdörtgenin alanýný,
  2 seçeneði için de dikdörtgenin çevresini hesaplayýp ekrana yazan programýn C kodunu yazýnýz.*/
  
 #include<stdio.h>
int main()
{
	int a,b,cevre,alan,secim;
	
	printf("Iki tamsayi kenar uzunlugu giriniz:");
	scanf("%d%d",&a,&b);
	
	printf("Alan icin 1, cevre icin 2 giriniz:");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		alan=a*b;
		printf("Alan=%d",alan);
	}
	if(secim==2)
	{
		cevre=2*(a+b);
		printf("Cevre=%d",cevre);
	}		
	return 0;
}

