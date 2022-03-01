#include<stdio.h>
int main(void)
{
	int n,i,sayi;
	int pos=0,neg=0,sifir=0;
	printf("kac tane sayi girilecek\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		printf("%d ninci sayi:",i);
	scanf("%d",&sayi);
	
	if(sayi>0)
	pos++;
	else if(sayi<0)
	neg++;
	else
	sifir++;
	}
    
	printf("%d adet pozitif sayi\n",pos);
	printf("%d adet negatif sayi\n",neg);
	printf("%d adet notr sayi\n",sifir);
	
		
	
	
	return 0;
}
