#include<iostream>
using namespace std;

int main()
{
	int sayi1, sayi2;
		cout << "Lutfen 1. ve 2. sayilari giriniz";
		cin >> sayi1 >> sayi2;

		cout << sayi1 << " ile " << sayi2 << " arasindaki armstrong sayilar şunlardir ";

		for (int i = sayi1; i <= sayi2; i++)
		{
			int sum = 0;
			int num= i;
			int gecici;

			while(num!=0)
			{
				gecici = num % 10;
				sum = sum + gecici * gecici*gecici;
				num /= 10;
			}

			if (sum == i)
			{

				cout << i << endl;
			}
		}

	return 0;
}