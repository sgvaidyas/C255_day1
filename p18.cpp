/*
n=5
5 8 9 8 5

n=6
6 10 12 12 10 6

n=8
8 14 18 20 20 18 14 8

pivot = 6
i  i<n  print(n) n+=pivot   pivot-=2
----------------------------
0  0<8   8        n=8+6=14    6-2 = 4
1  1<8   14       n=14+4=18   4-2 = 2
2  2<8   18       n=18+2=20   2-2 = 0
3  3<8   20       n=20+0=20   0-2 = -2
4  4<8   20       n=20-2=18   -2-2=-4
5  5<8   18       n=18-4=14   -4-2=-6

*/
#include<iostream>
using namespace std;
int main()
{
	int n, pivot;

	cin >> n;
	pivot = n - 2;

	for (int i = 0; i < n; i++)
	{
		
		cout << n << " ";
		n += pivot;
		pivot = (pivot - 2);
	}

}

