#include<iostream>
using namespace std;
int main()
{

	int n, i;
	cout<<"\n Enter n = ";
	cin >> n;

	cout << n << " ";

	for (i = 1; i <= (n - 1) / 2; i++)
	{
		cout << i << " " << n - i << " ";
	}

	if (n % 2 == 0)
	{
		cout << i;
	}

	return 0;
}
