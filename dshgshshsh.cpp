#include<stdio.h>
int main(void)
{
	int i,j,n;
	
   printf("n tamsayisini giriniz:");
   scanf("%d",&n);
   
   for(i=n;i>0;i--)
   {
   	for(j=0;j<i;j++)
   	printf("*");
   	printf("\n");
   }
	
	
	
	
	return 0;
}
