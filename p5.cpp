#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter a , b  & c = ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
			cout<<"\n a is greater "<<a<<endl;
		else
			cout<<"\n c is greater "<<c<<endl;
	}
	else
	{
		if(b<c)			
			cout<<"\n b is greater "<<b<<endl;
		else
			cout<<"\n c is greater "<<c<<endl;
	}
	return 0;
}
