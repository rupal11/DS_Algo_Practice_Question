#include <iostream> 
#include <cmath>

using namespace std;

float power(float m,float n)                  //iterative
{
    float p=1;
    for(;n>0;--n)
     p*=m;
    return p;
    
}


float rpower(float m,int n)                  //recursion
{
    if(n==0)
     return 1;
    if(n%2==0)
     return rpower(m*m,n/2);
    else
     return m*rpower(m*m,(n-1)/2);
}

int main() {
    float m;
    int n;
    cout<<"m raise to power n";
    cout<<"\nEnter the value of m : ";
    cin>>m;
    cout<<"\nEnter the value of n : ";
    cin>>n;
    cout<<"\n"<<m<<" raise to "<<n<<"\n 1. Using inbuilt function : "<<pow(m,n);
    cout<<"\n 2. Using power function : "<<power(m,n)<<"\n 3. Using recrusion function : "<<rpower(m,n);
	return 0;
}
