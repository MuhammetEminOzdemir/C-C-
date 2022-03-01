#include<stdio.h>
void topla1(void);

int main(void)
{
topla1();
return 0;
}
void topla1(void)
{
	int i,s,x;
	s=0;
	printf("Bir tamsayi giriniz:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	s=s+i;
	printf("toplam=%d",s);
	

}
