#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (n+1)/2; j++)
		{
			if(j==1 || i==j || i+j==n+1)
				cout<<"*";
			else
				cout<<" ";		
		}
		cout << "\n";
	}
}

