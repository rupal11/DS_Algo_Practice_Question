#include <iostream>
using namespace std;

unsigned int  nones(unsigned int n)
{
 if(n==0)
  return 0;
 else if (n%2==0)
  return nones(n/2);
 else
  return nones(n/2)+1;
}

int main() {
    int n;
	cout<<"Enter value of n : ";
	cin>>n;
	cout<<"\nNo.of ones in binary representation of n is :"<<nones(n);
	return 0;
}
