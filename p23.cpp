#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter a value for n ";
	cin>>n;
	for(int i=1; i <= n; i++){
		for(int j = 0;j<=n-i;j++){
			cout<<i+j;
		}
		cout<<"\n";
	}
}

