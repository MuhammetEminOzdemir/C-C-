#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Sayilari giriniz: ";
	cin >> x >> y >> z;

	cout << "Girdiginiz sayilar: " << x << " " << y << " " << z;
	cout << endl;

	int temp;
	temp = x;
	x = y;
	y = z;
	z = temp;

    cout << "Sayilarin yer degistirilmis hali: "<<x<<" " << y << " " << z;
	

	return 0;
}