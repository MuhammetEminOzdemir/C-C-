#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	const int size = 15;
	int dizi[size];
	srand(time(NULL));
	int g = 0;
	int temp2 = 0;
	int sayi;

	

	while (g < size)
	{
		sayi = rand() % 50;
		for (int i = 0; i < size; i++)
		{
			if (dizi[i] == sayi)
			{
				temp2 = 1;
				break;
			}

		}

		if (temp2 == 0)
		{
			dizi[g] = sayi;
			g++;
		}
		else
		{
			g--;
			temp2 = 0;
		}
	  
	}
	for (int i = 0; i < size; i++)
	{
      cout << dizi[i]<< " ";
	}


	



	return 0;
}