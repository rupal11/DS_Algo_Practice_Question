//Program to print sum of first natural no.

#include <iostream>
using namespace std;

// recursion
/*
long  sum(int n)
{
    if(n>0)
        return sum(n-1) + n ;  
    return 0;
}
*/

//Using formula
long sum(int n)
{
    return (n*(n+1))/2;
}


int main() {
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<"\nSum of first "<<n<<" natural no. is : "<<sum(n);
	return 0;
}
