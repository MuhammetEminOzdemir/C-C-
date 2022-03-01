#include <stdio.h> 


int asal_(int n);/*1.ASAL SAYININ FONSÝYON PROTÝTÝPÝ*/
void goldbach(int g);/*2.ASAL SAYININ FONKSÝYON PROTÝTÝPÝ*/

int main(){
	int sayi = 0;
	while(1){
		printf("Herhangi bir cift sayi giriniz :"); 
		scanf("%d",& sayi);   /*KLAVYEDEN ÇÝFT SAYI ALALLIM*/
		if(sayi>2 && sayi%2==0){     /*ALDIÐIMIZ ÇÝFT SAYININ 2 DEN BÜYÜK VE ÇÝFT OLDUÐUNA BAKARIZ*/
			goldbach(sayi);
		}
		else{
			printf("Hatali Sayi !\n");
		}
		printf("\n");
	}
	return 0;
}



int asal_(int n) /*1.ASAL SAYININ FONSÝYON PROTÝTÝPÝ*/
{
	int asal = 1;
	for (int j = 2; j < n/2; j++)
	{
		if((n%j) == 0) /*1. ASAL SAYININ GOLDBACH AYRIMINI BULAN KOD*/
		{
			return asal-1; 
		}
	}
	return asal;
}



void goldbach(int g)  /*2.ASAL SAYININ FONKSÝYON PROTÝTÝPÝ*/
{
	int i = 2;

	for (int j = g-i; j > 2; j--)  /*2. ASAL SAYININ GOLDBACH AYRIMINI BULAN KOD*/
	{
		if(asal_(i) == 1 && asal_(j) == 1) 
		{
			printf("Sayinin Golbach Ayrimi = %d = %d + %d\n",g,i,j); /*SAYININ GOLBACH AYRIMINI YAPTIKTAN SONRA ÝKÝ ASAL SAYININ TOPLAMI ÇIKTISINI VERÝR*/
			break;
		}
		i++;
	}
}
