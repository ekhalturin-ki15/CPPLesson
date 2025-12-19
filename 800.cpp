#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	std::ifstream cin("input.txt");
	std::ofstream cout("output.txt");


	int n;
	cin >> n;


	int a[10000];

	{
		int i = 0;
		while (i < (n * 2 - 1))
		{
			// 5
			// 1 0 -1 0 3 -1 4 0 -1
			//cout << i + 1 << " ";
			a[i] = i/2 + 1;
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

	{
		int i = 0;
		while (i < (n * 2 - 1))
		{
			cout << a[i] << " ";

			++i;
		}
	}







}