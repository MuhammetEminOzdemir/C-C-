#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int ucret, saat, gun;
	int kazanc=0,vergi=0;
	printf("Lutfen sirasiyla \n 1.Iscicin saatlik ucreti \n 2.Gunde ort kac saat calistigi \n 3.Ayda kac gun calistigi \n");
	scanf_s("%d%d%d", &ucret, &saat, &gun);

	if (kazanc < 500)
		printf("Vergi uygulanmayacaktir");

	else if((kazanc>=500)&&(kazanc<700))
		printf("%5 vergi uygulanacaktir");
	vergi = kazanc * 0.05;











	return 0;
}