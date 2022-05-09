#include<iostream>
using namespace std;
int main() 
{
	int n,i;
	//n=5    123454321
	cout<<"\n enter n = ";
	cin>>n;
	
	for(i=1; i<2*n ; i++)
	{
		if(i<=n)
			cout<<i;
		else
			cout<<2*n-i;
		cout<<endl;
	}	
	
	
	return 0;
}
