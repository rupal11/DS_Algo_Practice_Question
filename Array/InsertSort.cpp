
  
#include <iostream>

using namespace std;

int InsertSort(int *A,int n,int k)
{
    int i=0;
    while(k<A[i])
    {
        A[i+1]=A[i];
        --i;
    };
    A[i+1]=k;
    return 1 ;
}

int main() {
    int i,k,n;
	cout<<"Enter the value of n :";
	cin>>n;
	int A[n+1 ];
	for(i=0;i<n;++i)
	{
    	 cout<<"Enter the value : ";
    	 cin>>A[i];
    }
    cout<<"Enter the value to be inserted : ";
    cin>>k;
    InsertSort(A,n,k);
     cout<<"Array after insertion is :\n";
    for(i=0;i<n+1;++i)
     cout<<A[i]<<endl;
	return 0;
}