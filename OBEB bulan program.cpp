/*#include<iostream>
using namespace std;
int main()
{
	//Ýki tam sayýyý mükemmel bir þekilde bölebilen en büyük tam sayý, bu iki sayýdan OBEB veya HCF olarak bilinir.

	int n1, n2;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	cout << "HCF = " << n1;

	return 0;
}*/

//for döngüsü kullanarak 


#include <iostream>
using namespace std;

int main() {
	int n1, n2, hcf;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	//n2, n1'den büyükse, n1 ve n2 deðiþkenlerinin deðiþtirilmedir o zamanda temp ile deðiþtir deðiþkenle
	if (n1 > n2)
	{

    for (int i = 1; i <=  n2; ++i) 
	{
		if (n1 % i == 0 && n2 % i ==0) {
			hcf = i;
		}
	}

	}


	cout << "HCF = " << hcf;
	return 0;
}

