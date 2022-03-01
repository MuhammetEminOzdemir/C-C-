#include<stdio.h>
#define PI 3.14
int main(void)
{
	int r ;
	double cevre,alan;
	
	printf("yaricap giriniz:");
	scanf("%d",&r);
	
	cevre=2*PI*r;
	printf("dairenin cevresi=%f\n",cevre);
	
	alan=PI*r*r;
	printf("dairenin alani=%f",alan);
	
	return 0;
}
