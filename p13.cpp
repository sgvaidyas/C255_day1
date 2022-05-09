#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 1;n>0 ; i += 3,n--)
	{
		cout << i << " ";
	}
	return 0;
}

