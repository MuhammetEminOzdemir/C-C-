#include<iostream>
using namespace std;

int main() 
{
	
	int i, j;
	for (i = 1; i < 10; i += 2)  //kaç satýr olacak? 9 satýr olarak verilmiþ
	{
		for (j = 0; j < 9 - i/2 ; j++) // bosluk sayýsý
		{
			cout << " ";
		}
		for (j = 0; j < i; j++)
		{
			cout << "*";
		} // yýldýz sayýsý
		cout << endl;
	}

	for (i = 7; i > 0; i -= 2) {

		for (j = 0; j < 9 - i / 2; j++)
		{
			cout << " ";
		}

		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}











	return 0;

}