/*
         *
		***
	   *****
	  *******
	 *********
*/
#include<iostream>
using namespace std;

int main()
{
	int e=1;

	for (int a = 1; a <= 5; a++)  //Bu döngü þeklin programdaki satýr sayýsýný belirliyor
	{
		for (int b = 4; b >= a; b--) //Bu döngü satýrýn sondan 1 er 1 er azalmasýný saðlýyor 4.satýrdan baþlamsýnýn sebebi ilk o satýrda azalma oluyor.
		{
			cout << " ";

		}
		for (int c = 0; c < e; c++) //Bu döngü programdaki e ani 1 yýldýz dan baþlýyor 2 þer artacak sayac (e=e+2);
		{
			cout << "*";
		}
		cout << endl;
		e = e + 2;
	}



	return 0;
}