#include<iostream>
using namespace std;

int main(void)
{
	int satir, sutun;
	int deger;

	cout << "Satir ve sutun degerlerini giriniz:";
	cin >> satir >> sutun;

	for (int i = 1; i <=satir; i++)
	{


		for (int j = 1; j <= sutun; j++)
		{
			cout << i << "x" << j <<"="<< i * j << " ";
			

		}
		cout << endl;
	}

	return 0;
}