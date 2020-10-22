

  
#include <iostream>

using namespace std;

void Rotate(int *A,int n,int k)
{
    int i,temp;
    while(k--)
    {
        temp=A[0];
        for(i=0;i<n-1;++i)
        {
            
             A[i]=A[i+1];
        }
        A[i]=temp;
    }
    return ;
}

int main() {
    int i,k,n,index;
	cout<<"Enter the value of n :";
	cin>>n;
	cout<<"Enter the no. of rotations :";
	cin>>k;
	int A[n];
	for(i=0;i<n;++i)
	{
    	 cout<<"Enter the value : ";
    	 cin>>A[i];
    }
    Rotate(A,n,k);
    for(i=0;i<n;++i)
     cout<<A[i]<<endl;
	return 0;
}