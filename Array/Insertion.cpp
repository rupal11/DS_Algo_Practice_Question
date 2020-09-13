#include <iostream>

using namespace std;

int Insert(int *A,int n,int key,int index)
{
    int i;
    if(index>=0 && index<=n)
    {
        for(i=n;i>=index;--i)
        {
            A[i+1]=A[i];
        }
        A[index]=key;
        return 0;
    }
    return -1;
}

int main() {
    int i,k,n,s,index;
	cout<<"Enter the value of n :";
	cin>>n;
	int A[n+1];
	for(i=0;i<n;++i)
	{
    	 cout<<"Enter the value : ";
    	 cin>>A[i];
    }
    cout<<"Enter the element you want to insert : ";
    cin>>s;
    cout<<"Enter the index where you want to insert the element: ";
    cin>>index;
	k=Insert(A,n+1,s,index);
	if(k==-1)
	 cout<<"Element not inserted.";
	else
	 cout<<"Element inserted"<<endl;
	 for(i=0;i<n+1;++i)
	  cout<<A[i]<<" ";
	return 0;
}
