#include<iostream>
using namespace std;

int main()
{
	/*

	******
	*****
	****
	***
	**
	*

	*/

	int x;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> x;

	for (int i = x; i >= 1; --i)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";

		}
		cout << endl;
	}

	return 0;
}