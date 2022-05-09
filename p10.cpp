/*
n = 5
i = 1

1  4  7  10  13 

while(n>0)
i n   print(i)   i=i+3   n--
----------------------------
1 5    1          4      4
4 4    4          7      3
7 3    7         10      2
102   10         13      1
131   13         16      0
0---------------------------






*/


#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"\n Enter n = ";
	cin>>n;
	while(n>0)
	{
		cout<<i<<"\t";
		i += 3;//i=i+3
		n--;
	}
	return 0;
}
