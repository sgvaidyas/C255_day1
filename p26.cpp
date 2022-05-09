#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cout<<"Please provide a value for n"<<endl;
  cin>>n;
  cout<<endl;
  bool b = true;
  int l = n+1;
  int i =1;
  while(n<l)
  {
      if(b)
      {
          cout<<i;
          i++;
          if(n==2)
          {
              b = false;
              cout<<i;
          }
          
          n--;
      }
      else
      {
          cout<<i;
          i--;
          n++;
      }
      
  }
  
  return 0;
}

