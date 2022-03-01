/*
   ***************
   *             *
   *             *
   *             *
   *             *
   *             *
   ***************

*/
#include<iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 10; i++) //Bu döngüde karenin ilk satýrý olan 10 tane * yapýldý
	{
		cout << "*";
	}
	cout << endl;
	// alt satýra giderek
	for (int a = 1; a <= 5; a++) //bu döngüde alt astýr olan alt alta olan 5 yýldýz için yapýldý
	{
		for (int b = 0; b < 1; b++)  //bi solda olduðundan birde saðda alt alta olan 5 yýldýz için yapýldý
		{
			cout <<"*";
		}

		for (int d = 1; d <= 8; d++) //burada karenin içerisindeki 8 tane boþuk býrakmak için tum satýrlara o yüzden
		{
			cout <<" ";
		}
		cout <<"*";
		cout << endl; // alt alta geçmesi için yýldýzlarýn
	}


	for (int z = 1; z <= 10; z++) //Bu döngüde karenin alt satýrý olan 10 tane * yapýldý tekrardan
	{
		cout << "*";
	}




		
	return 0;
}