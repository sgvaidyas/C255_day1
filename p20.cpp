#include<iostream>
using namespace std;
int main()
{
	int i, n, j;
	
	while (1)
	{
		cin >> n;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << j;
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}

