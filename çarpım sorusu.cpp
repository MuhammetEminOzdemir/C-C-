#include<stdio.h>
int main(void)
{
	int a,b,c,carpim;
	
	printf("3 tamsayi giriniz\n");
	scanf("%d%d%d",&a,&b,&c);
	
	carpim=a*b*c;
	
	printf("carpim=%d",carpim);
	
	return 0;
}
