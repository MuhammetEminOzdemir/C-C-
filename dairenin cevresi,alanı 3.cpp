#include<stdio.h>
int main()
{
  double a,b,alan,cevre;
   
char secim;

printf("Iki kenar uzunlugu giriniz:");
	scanf("%f%f",&a,&b);
	printf("Alan icin A veya a, cevre icin C veya c giriniz:");
	scanf(" %c",&secim);
	if(secim=='A'||secim=='a')
	{
		alan=a*b;
		printf("Alan=%lf",alan);
	}
	if(secim=='C'||secim=='c')
	{
		cevre=2*(a+b);
		printf("Cevre=%lf",cevre);
	}
			
	return 0;
}

