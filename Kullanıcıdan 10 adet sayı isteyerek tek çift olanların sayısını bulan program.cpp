#include<iostream>
using namespace std;

int main(void)
{
	int sayi;
	int tekadet=0, ciftadet=0;
	
	cout << "Lutfen sayilari giriniz:";
    

	for (int i = 0; i < 10; i++)
	{

		cin >> sayi;

		if (sayi % 2 == 1)
		{
			tekadet++;
			
		}
		else
		{
			ciftadet++;
		}
	}
	cout << endl;

      cout <<tekadet<<" "<<"Bu sayiler tekdir." << endl;
      cout <<ciftadet<<" "<< "Bu sayiler ciftdir." << endl;
		



	return 0;
}