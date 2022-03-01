#include<iostream>
using namespace std;

int main(void)
{
	/*Bu program kullanıcıdan bir tamsayı alır ve bu tamsayı tersine çevrilir
     Ters tamsayı, kullanıcı tarafından girilen tamsayıya eşitse, 
     o sayı bir palindrom değilse, o sayı bir palindrom değildir.*/

	int sayi,n;
	int num1, num2=0;
	cout << "Lutfen bir sayi giriniz:";
	cin >> sayi;
	n = sayi;
	while (sayi != 0)
	{
		num1= sayi % 10;
		num2 = (num2 * 10) + num1;
		sayi /= 10;
	}
	
	cout << "Sayinin tersi=" << num2<<endl;

	if (sayi == num2)
	{
		cout << "girdiginiz sayi polindrom sayidir";
	}

	else {
		cout << "girdiginiz sayi polindrom sayi degildir";

	}
	return 0;
}