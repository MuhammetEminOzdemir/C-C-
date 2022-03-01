/*Girilen n satir sayisýna göre * karakterlerini aþaðýdaki þekilde yazdýran programýn C kodunu yazýnýz.
Örnek:
n=8 için
*
**
***
****
*****
******
*******
********     */

#include<stdio.h>
int main(void)
{
  int i,j;
  
  
  for(i=1;i<=8;i++)
  {
  	for(j=1;j<=i;j++)
  	
  	printf("*",i,j);
  	
  	printf("\n");
  }
	
	return 0;
}
