#include <iostream>
using namespace std;


long factorial(int n)                  // iterative
{
    long fact=1;
    for(;n>=2;--n)
     fact*=n;
    return fact;
}


long Rfactorial(int n)                  // recursive
{
  if(n==0)
   return 1;
  else
   return Rfactorial(n-1)*n;
}

int main() {
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" : \n 1. Using iteration :  "<<factorial(n)<<"\n 2. Using recursion : "<<Rfactorial(n);
	return 0;
}
