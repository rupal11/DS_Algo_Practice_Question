
#include <iostream>

using namespace std;

int Delete(int *A,int n,int index)
{
    int i,x;
    if(index>=0 && index<=n)
    {
        x=A[index];
        for(i=index;i<n;++i)
        {
            A[i]=A[i+1];
        }
        A[i]=0;
        return x;
    }
    return -1;
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
    cout<<"Enter the index of elementt that want to delete: ";
    cin>>index;
	k=Delete(A,n+1,index);
	if(k==-1)
	 cout<<"Element not deleted.";
	else
	 cout<<"Deleted element "<<k<<" which was present at "<<index<<" position."<<endl;
	 for(i=0;i<n-1;++i)
	  cout<<A[i]<<" ";
	return 0;
}

