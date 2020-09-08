#include <iostream>
using namespace std;

int F[20];

int Fib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
         F[n-2]=Fib(n-2);
        if(F[n-1]==-1)
         F[n-1]=Fib(n-1);
        return F[n-2] +F[n-1];
    }
}

int main() {
    int n,i;
	cout<<"Enter the value of n (less than 20): ";
	cin>>n;
	for(i=0;i<n;++i)
     F[i]=-1;
	cout<<Fib(n);
	return 0;
}