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
		while (i < n)
		{
			a[i] = i + 1;
			a[i + 1] = 0;

			i += 1;
		}
	}


	{
		int i = 0;
		while (i < n)
		{
			if (i % 3 == 2)
				a[i] = -1;

			++i;
		}
	}


	{
		int i = 0;
		while (i < n)
		{
			cout << a[i] << "\t";

			++i;
		}
	}
	cout << "\n";







}