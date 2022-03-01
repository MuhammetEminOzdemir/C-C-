#include<iostream>
#include<cstdlib>
#include<ctime>

//Bir diziyi fonksiyon kullanarak küçükten büyüðe doðru siralama

using namespace std;
void DiziyiSirala(int[], int);
int main()
{
	srand(time(0));
	const int DIZI_BOYUTU = 10;
	int dizi[DIZI_BOYUTU];

	cout << "Dizinin siralanmamis hali: ";
	for (int i = 0; i < DIZI_BOYUTU; i++)
	{
		dizi[i] = rand() % 999 + 1; //1 ile 99 arasýnda
		cout << dizi[i] << " ";

	}

	cout << endl;

	DiziyiSirala(dizi, DIZI_BOYUTU);
	cout << "Dizinin siralanmis hali: ";

	for (int i = 0; i < DIZI_BOYUTU; i++)
		cout << dizi[i] << " ";

	return 0;
}
void DiziyiSirala(int a[], int diziBoyutu)
{
	int minimumIndis, geciciDegisken;
	int i;
	for (i = 0; i < (diziBoyutu - 1); i++)
	{

		minimumIndis = i;

		for (int j = i + 1; j < diziBoyutu; j++)
		{
			if (a[j] < a[minimumIndis])
				minimumIndis = j;
		}
		if (i != minimumIndis)
		{

			//swap
			geciciDegisken = a[i];
			a[i] = a[minimumIndis];
			a[minimumIndis] = geciciDegisken;
		}



	}

}