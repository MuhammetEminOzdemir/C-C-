/*

      *********
	   *******
	    *****
	     ***
	      *
*/
#include<iostream>
using namespace std;

int main()
{
	int sayac = 9;
	for (int a = 1; a <= 5; a++) //Bu döngü þeklin programdaki satýr sayýsýný belirliyor
	{
		for (int b = 0; b < sayac; b++) //bu döngü sütün gibi yýldýzlarý 2þer 2þer azaltýyor
		{
			cout << "*";
			
		}
		cout << endl;
		sayac -= 2;

		for (int c = 0; c < a; c++)
		{
			cout << " ";
		}
	}



	return 0;
}

