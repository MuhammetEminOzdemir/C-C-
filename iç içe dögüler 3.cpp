#include <iostream>
using namespace std;
int main()
{
	cout << "ic ice donguler ornekler" << endl;

	int boyut;

	cout << "lutfen boyut bildiren bir sayi giriniz" << endl;
	cin >> boyut;

	for (int a = 1; a <= boyut; a++) //bu for döngüsü iki tane for'u kapsamaktadýr
	{

		for (int b = 1; b < a; b++) //ilk for döngüsü boþluk sayýsýný belirleyecek
		{
			cout << " ";
		}

		for (int c = 1; c <= boyut - a + 1; c++) //ikinci for döngüsü ise yýldýz sayýsýný belirleyecektir
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
