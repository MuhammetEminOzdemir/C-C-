#include<iostream>
using namespace std;

int main()
{
	//Bu program kullanýcýdan iki sayý (bir taban sayý ve bir üs) alýr ve gücü hesaplar.
	//burada kýsaltma olarak pow() fonksiyonunu kullanabilirz

	float x, y,sonuc;
	cout << "Lutfen sayilari giriniz:";
	cin >> x >> y;

	sonuc = pow(x, y);
	cout << x << "^" << y << "=" << sonuc;

	return 0;
}