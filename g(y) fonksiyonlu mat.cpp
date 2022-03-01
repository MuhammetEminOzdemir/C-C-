#include<stdio.h>
#include<math.h>
#define e 2.7
int main(void)
{
	float g,y;
	printf("y degerini giriniz:");
	scanf("%f",&y);	
	
if(y>10)
g=sqrt(pow(y,3)+1);

else if(y>=0 && y<=10)
g=pow(e,y)-10;

else
g=y/(y+15);

printf("g=%f",g);

	
	
	
	
	return 0;
}
