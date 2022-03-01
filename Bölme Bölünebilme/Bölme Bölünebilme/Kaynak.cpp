#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int sayi;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf_s("%d", &sayi); //kullanýcýdan sayi istedik


	if ((sayi % 13 == 0) && (sayi % 17 == 0)) // mod alýrken % iþareti kullanýlarak (==0) tam bölünüyor anlamýndadýr
	{
		printf("Girdiginiz sayi 13 ve 17' ye bölunuyor\n");
	}

	if (sayi % 13 == 0)
	{
		printf("Sayi sadece 13'e bolunuyor\n");
	}

	if(sayi % 17 == 0) 
	{
		printf("Girdiginiz sayi sadece 17'e bolunuyor\n");
	}

	if ((sayi % 13 == 1) && (sayi % 17 == 1)) //mod alýrken % iþareti kullanýlarak (== 1) tam bölünmüyor anlamýndadýr
	{
		printf("sayi 13 ve 17'e bolunmuyor\n");
	}

	return 0;
}