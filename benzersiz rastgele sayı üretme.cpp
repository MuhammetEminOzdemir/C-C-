#include <iostream>
#include <algorithm>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */

using namespace std;

int main()
{
	srand(time(NULL));

	int random;
	bool unique = true;
	const int dizi1 = 5;
	const int dizi2 = 10;

	int harf[dizi1][dizi2];

	for (int i = 0; i < dizi2; i++)
	{
		for (int j = 0; j < dizi2; j++)
		{
			do
			{
				random = rand() % 100;
				for (int x = 0; x < dizi1; x++)
				{
					for (int y = 0; y < dizi2; y++)
					{
						unique = true;
						if (harf[x][y] == random)
						{
							unique = false;
							y = dizi2;
							x = dizi1;
						}

					}
				}
			} while (!unique);
			harf[i][j] = random;
		}
	}


	for (int i = 0; i < dizi1; i++)
	{
		for (int j = 0; j < dizi2; j++)
		{
			cout << harf[i][j] << "\n";
		}
	}



	return 0;
}
