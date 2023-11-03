#include <fstream>
#include <iostream>
using namespace std;
ofstream fout("bac.out");
int sumaCifre(int);
int main()
{
	int x, a, b, sc;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	for (x = a; x <= b; x++)
	{
		sc = sumaCifre(x);
		if (x%sc == x/sc)
			fout << x << ' ';
	}
	fout.close();
	return 0;
}
int sumaCifre(int x)
{
	int sc = 0;
	while (x)
	{
		sc += x%10;
		x /= 10;
	}
	return sc;
}
