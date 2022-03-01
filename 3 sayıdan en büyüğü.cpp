#include<stdio.h>
int main(void)
{
	
	int a,b,c;
	
	printf("uc sayi giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	printf("a sayisi buyuktur=%d",a);
	
	else if(b>c)
	printf("b sayisi buyuktur=%d",b);
	
	else if(c>a)
	printf("c sayisi buyuktur=%d",c);
	
	
	
	return 0;
	
}
