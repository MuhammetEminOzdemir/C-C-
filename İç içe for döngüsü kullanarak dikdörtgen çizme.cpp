#include<iostream>
using namespace std;

int main(void)
{
	int satir, sutun, space;

	cout << "Satir degerini giriniz" << endl;
	cin >> satir;

	cout << "sutun degerini giriniz" << endl;
	cin >> sutun;

	space = (sutun - 2) * 2 + 1;

	for (int i = 0; i <= sutun; i++)
	{
		cout <<"* ";
	}
	cout << "\n";

	for (int j = 0; j <= satir - 2; j++)
	{
		cout <<"* ";

		for (int k = 0; k <= space; k++)
		{
			cout <<" ";
		}
		cout << "*\n";
		
	}
		for (int i = 0; i <= sutun; i++)
		{
			cout <<"* ";
		
	    }

	return 0;

}