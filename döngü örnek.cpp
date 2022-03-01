/*Ýki kardeþin yaþlarý 2 ve 4’tür,
 annelerinin yaþý ise 25’tir.
  Kaç yýl sonra kardeþlerin yaþlarýnýn toplamý, annelerinin yaþýný geçer?*/

#include<stdio.h>
int main(void)
{
	int k1=2,k2=4;
	int anne=25;
	int yil;
	
	for(yil=0;k1+k2<=anne;yil++)
	{
		k1++;
		k2++;
		anne++;
		
	}
	printf("%d yil gecer",yil);

return 0;
}

/*Klavyeden girilen m ve n tamsayýlarýnýn
 arasýnda kalan tek ve çift sayýlarýn toplamlarýný
  bulan ve ekrana yazan C programýný while ve for kullanarak yazýnýz.*/
  
 #include<stdio.h>
int main(void)
{
	int m,n,tek=0,cift=0;
	printf("m ve n sayilarinin giriniz:");
	scanf("%d%d",&m,&n);
	
	for(int i=m;i<=n;i++)
	{
		if(i%2==0)
		cift=cift+i;
		else
		tek=tek+i;
		
	}
	
	printf("Ciftler Toplami=%d\nTekler Toplami=%d",cift,tek);
		
return 0;	
}
  
  
