#include<iostream>
using namespace std;
int main()
{

	int n, i,j;
	cout<<"\n Enter n = ";
	cin >> n;

	for (j=n,i = 1;i<=(n+1)/2 ; j--,i++)
	{
		if(i==j)
			cout <<j << " ";
		else
			cout <<j << " " << i << " ";
	}

	

	return 0;
}
