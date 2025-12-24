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
	//cin >> n;

	cin >> a >> b;


	while (a < b)
	{
		--b;
		++a;
		cout << a << " ";
		continue;
	}

}