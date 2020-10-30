
  
#include <iostream>

using namespace std;

void Rearrange(int *A,int n)
{
    int i=0,temp;
    int j=n-1;
    while(i<j)
    {
        while(A[i]<0) ++i;
        while(A[j]>=0) --j;
        if(i<j)
         {
             temp=A[i];
             A[i]=A[j];
             A[j]=temp;
         }
    }
}

int main() {
    int i,k,n;
	cout<<"Enter the value of n :";
	cin>>n;
	int A[n];
	for(i=0;i<n;++i)
	{
    	 cout<<"Enter the value : ";
    	 cin>>A[i];
    }
    Rearrange(A,n);
     cout<<"Array after rearrangement is :\n";
    for(i=0;i<n+1;++i)
     cout<<A[i]<<endl;
	return 0;
}