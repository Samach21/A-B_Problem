#include<iostream>

#define l long

using namespace std;

l result(l, l);

int main() 
{
	l a[2];
	l* n = a;
	cout << "INPUT: ";
	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
		if (a[i] < 0 || a[i] > 1000000000)
		{
			cout << "ERROR";
		}
	}
	cout << "OUTPUT: ";
	cout << result(*n, *(n + 1));
	return 0;
}

l result(l a, l b)
{
	l r;
	r = a + b;
	return r;
}