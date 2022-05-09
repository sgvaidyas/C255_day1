#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n a Apples b Mango  c Grapes ";
	cout<<"\n enter the choice  = ";
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':cout<<"\n Apples";
		         break;
		case 'B':
		case 'b':cout<<"\n Mango";
		         break;
		default: cout<<"\n Invalid choice ";
		        break;    
		case 'C':
		case 'c':cout<<"\n Grapes";
		         break;		
	}
}
