#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int yil;
	printf("Lutfen yili giriniz:"),
		scanf_s("%d", &yil);
	if (yil % 4 == 0)
	{
		if (yil % 100 == 0)
		{
			if (yil % 400 == 0)
			{
				printf("Artik yil= %d", yil);
			}
			else
				printf("%d= Artik yik degildir", yil);
}
		else
			printf("%d= Artik yik degildir", yil);
	}

	
	else
		printf("%d= Artik yik degildir", yil);

	return 0;
}