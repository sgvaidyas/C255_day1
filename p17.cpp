#include<iostream>
using namespace std;
int main()
{
	int n, i, j = 0;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		j += i; 
		cout << j << " ";
	}
}

