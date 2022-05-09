#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"\n1 Burger 2 Pizza 3 Exit ";
	cout<<"\n Enter the choice = ";
	cin>>ch;
	if(ch==1)
		cout<<"\n Pay 100 ";
	else if(ch==2)
		cout<<"\n Pay 200 ";
	else if(ch==3)
		cout<<"\n Exit ";
	else
		cout<<"\n invalid choice";
	return 0;
}
