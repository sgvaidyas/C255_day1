#include<iostream>
using namespace std;
int main()
{

	int n, i,j;
	cout<<"\n Enter n = ";
	cin >> n;
	
	for (int i = 1; i < n; i++){
		cout << " " << n << " " << i;
		n--;
		if (n - i == 1) {
			cout << " " << n--;
		}
	}
	return 0;
}

