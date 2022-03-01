#include <iostream>
using namespace std;
int main()

{
	cout << "ic ice donguler ornekler" << endl;


	for (int i = 1; i <= 4; i++)
		/*bizim çarpým tablomuz 1'den baþaladýðý için
		 * deðeri 1'e atayarak baþladýk ve ayrýca
		 * deðerin 4'e <= olmasýnýn sebebi yine çarpým tablomuzun
		 * 4'ler kýsmýnda bitiyor olmasýdýr. */
	{

		for (int a = 1; a <= 4; a++)
		{

			cout << i * a << " , ";
			// yan yana yazýlmalarý için endl koymuyoruz, eðer koyarsak satýr aþaðý kýsýma geçer

		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// boyutu kullanýcýdan alýnan örnek
	int boyut;
	cout << "lutfen bir sayi giriniz.." << endl;
	cin >> boyut;
	for (int b = 1; b <= boyut; b++) {

		for (int c = 1; c <= boyut; c++) {

			cout << b * c << " , ";

		}
		cout << endl;
	}

	return 0;
}
