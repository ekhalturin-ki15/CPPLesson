#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	std::ifstream cin("input.txt");
	std::ofstream cout("output.txt");

	int a, b;


	// Процедурный стиль 
	// Asm

	int n;
	cin >> n;

	a = 0;
	b = 10;

l:
	if (a < b)
	{
		cout << a << " ";
		++a;
		goto l;
		//continue;//
	}

	cout << " ";
	a = 0;
	b = 10;
	while (a < b)
	{
		++a;
		cout << a << " ";
		continue;
	}

}