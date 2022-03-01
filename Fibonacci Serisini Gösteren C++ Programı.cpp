#include<iostream>
using namespace std;
int main()
{
	int num;
	int n1 = 0, n2 = 1;
	int gecici;
	cout << "Terim sayisini girin: ";
	cin >> num;

	cout << "Fibonacci Serisi: ";
	cout << n1 << " " << n2 << " ";

	for (int i = 2; i < num; i++)
	{
		gecici = n1 + n2;
		n1 = n2;
		n2 = gecici;
		cout << gecici << " ";
	}

	return 0;
}