
  
#include <iostream>

using namespace std;

int IsSorted(int *A,int n)
{
    int i;
    for(i=0;i<n-1;++i)
    {
            
        if(A[i]>A[i+1])
         return -1;
    }
    return 1 ;
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
    k=IsSorted(A,n);
    if(k==1)
     cout<<"Array is sorted";
    else 
     cout<<"Array is not sorted.";
    for(i=0;i<n;++i)
     cout<<A[i]<<endl;
	return 0;
}