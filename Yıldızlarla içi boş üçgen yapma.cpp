/*
       *
	  * *
	 *   *
	*     *
   *********  
	   	   
*/
#include<iostream>
using namespace std;
int main()
{

	int z = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			cout << " "; 
		}
		cout << "*";   

		if (i != 0)
		{
			for (int k = 1; k <= z; k++)
			{
				
			}
			cout << "*";
			z += 2;
		}
		cout << endl; 
	}

	for (int i = 0; i <= z + 1; i++)
	{
		cout << "*";
	}

	return 0;
}
