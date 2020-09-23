#include <iostream>

using namespace std;

void Reverse1(int *A,int n)
{
    int i,j,B[n];
    for(i=0,j=n-1 ; i<n ; ++i,--j)
     B[i]=A[j];
    for(i=0;i<n;++i)
     A[i]=B[i];
    return ;
}

int main() {
    int i,k,n,index;
	cout<<"Enter the value of n :";
	cin>>n;
	int A[n];
	for(i=0;i<n;++i)
	{
    	 cout<<"Enter the value : ";
    	 cin>>A[i];
    }
    Reverse1(A,n);
    for(i=0;i<n;++i)
     cout<<A[i]<<endl;
	return 0;
}