#include<iostream>
using namespace std;

int main(void)
{
	int yil;
	cout << "yili giriniz:";
	cin >> yil;

	if ((yil % 4 == 0) && (yil % 100 != 0)||(yil % 400 == 1))
	{
		cout << "Girilen yil artik yildir.";

	}
	else {
		cout << "Girilen yil artik yil degildir.";
	}


	return 0;
}