#include<stdio.h>
int main(void)
{
	float sayi;
	float toplam=0.0;
	int i=1;
	
	printf("10 adet sayi giriniz\n");
	while(i<=10)
	{
			scanf("%f",&sayi);
			
			if(sayi>0)
			toplam=toplam+sayi;
			i=i+1;
		
	}

	printf("pozitif sayilarin toplami:%f",toplam);
	
	
	
	
	
	return 0;
}
