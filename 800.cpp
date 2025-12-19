#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	std::ifstream cin("input.txt");
	std::ofstream cout("output.txt");


	int n;
	cin >> n;
	int m;
	cin >> m;

	int a[10000];

	{
		int i = 0;
		while (i < (n * 2 - 1))
		{
			// 5
			// 1 0 -1 0 3 -1 4 0 -1
			//cout << i + 1 << " ";
			a[i] = i / 2 + 1;
			// x = 3 y = 2
			// x = 5 y = 3
			// x = 7 y = 4
			// x = 9 y = 5
			//y = 
			a[i + 1] = 0;

			i += 2;
		}
	}


	{
		int i = 0;
		while (i < (n * 2 - 1))
		{
			if (i % 3 == 2)
				a[i] = -1;

			++i;
		}
	}
	int i = 0;
	int g = 0;
	while (i < (n * 2 - 1)) {
		if (a[i] == 0) {
			if (g < m) {
				a[i] = -2;
				g++;
			}

			else {
				break;
			}
		}


		i++;
	}



	{
		int i = 0;
		while (i < (n * 2 - 1))
		{
			cout << a[i] << "\t";

			++i;
		}
	}
	cout << "\n";


	int b[100000];
	{
		int i = 0;
		while (i < (n * 2 - 1)) {
			b[i] = a[i] + a[i + 1];

		
			i++;
		}
		{
			int i = 0;
			while (i < (n * 2 - 1))
			{
				cout << b[i] << "\t";

				++i;
			}
		}
	}




}