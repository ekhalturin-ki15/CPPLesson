#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	std::ifstream cin("input.txt");
	std::ofstream cout("output.txt");

	int i = 2;
	int a = 5;
	int b = 23;

	// 16 гб
	// 4 000 000 000

	long long R;

	int h = 10;
	int y = 100;

	int u = i >> h;
	//cout << b - a*(b/a);

	//   b % a
	//   b - (b/a) * a

	// b = Q * a + R
	// R = b - Q * a

	//double
	//float 


	a = 5;
	b = 21;
	//int i = 2;
	//int a = 5;
	//int b = 25;

	b = 1;
	while (b < 100)
	{
		a = 1;
		while (a < 100)
		{
			cout << b << " " << a << " ";
			cout << (b / a) << " ";
			cout << ((b + a - 1) / a);
			cout << "\n";
			++a;
		}

		++b;
	}

	
	cout << ((a-1) / a) << " ";
	cout << ((b + a - 1) / a);
	//b + a - 1/ a
	// b/a  + (a-1)/a
	


}