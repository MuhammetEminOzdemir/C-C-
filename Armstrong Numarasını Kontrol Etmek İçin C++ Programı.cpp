#include<iostream>
using namespace std;

int main()
{
	//3  Basamaklý bir Armstrong sayýsý olmasý durumunda, 
		//her basamaðýn küplerinin toplamý sayýnýn kendisine eþittir.
		//Örneðin, 153 bir Armstrong sayýsýdýr çünkü

	//	153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3   =153

	int sayi;
	int num1=0;
	int sonuc=0;
	cout << "Lutfen pozitif bir sayi giriniz:";
	cin >> sayi;
	int gecici;
	gecici = sayi;
	
	while (gecici != 0)
	{
		num1 = gecici % 10; //modlarýna yani parçalarýna ayrýlýr
		sonuc += num1 * num1*num1; //rakamlar çarpýlýp toplanýr
		gecici /= 10;
	}


	if (sonuc == sayi) {

cout << sayi << " Armstrong sayidir.";
	}
		
	else {
cout << sayi << " Armstrong sayi degildir.";
	}
		





	return 0;

}