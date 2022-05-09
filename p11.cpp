#include<iostream>
using namespace std;
int main()
{
	int n,i=1,x=1;
	cout<<"\n Enter n = ";
	cin>>n;
	while(x<=n)
	{
		cout<<i<<"\t";
		i += 3;//i=i+3
		x++;
	}
	return 0;
}
