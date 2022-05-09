#include <iostream>

using namespace std;

int main()
{
	int n, sign = 0;

	cin >> n;

	for (int i = 2; i <= n * 2; i+=2)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j + (j > i / 2) * (1 - (j - i / 2) * 2) << " ";
		}
		cout << "\n";
	}
}

