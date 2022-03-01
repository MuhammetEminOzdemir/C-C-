#include<stdio.h>
int main(void)
{
	int arasinav1,arasinav2,final;
	double nothesaplama;
	
	printf("sinav notlarini sirasiyla giriniz:");
	scanf("%d%d%d",&arasinav1,&arasinav2,&final);
	
	nothesaplama=arasinav1*0.20+arasinav2*0.30+final*0.50;
	
	printf("nothesaplamasi=%5f\n",nothesaplama);
	
	if(nothesaplama>=90)
	printf("COK BASARILI AA",nothesaplama);
	else if(nothesaplama>=80)
    printf("BASARILI BB",nothesaplama);
	else if(nothesaplama>=70)
	printf("IDARE EDER CC",nothesaplama);
	else if(nothesaplama>=60)
	printf("BASARISIZ DD",nothesaplama);
	else
	printf("COK KOTU FF",nothesaplama);
		
	
	
	return 0;
	
}
