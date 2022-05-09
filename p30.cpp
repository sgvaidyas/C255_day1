#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter a value for n ";
	cin>>n;
	for(int i=0; i < n; i++){
		for(int j = 0;j < n;j++){
			if(j>(n-1)/2){
				cout<<" ";
			}else if(j ==0 || (j==i) || j+ i == n-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
				
		}
			
		cout<<"\n";
	}
}

