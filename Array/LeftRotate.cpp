 #include <iostream>

using namespace std;

void leftRotate(int *A,int n,int k)
{
    int i,temp;
    while(k--)
    {
        temp=A[n-1];
        for(i=n-2;i>=0;--i)
        {
            
             A[i+1]=A[i];
        }
        A[0]=temp;
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
    leftRotate(A,n,k);
    for(i=0;i<n;++i)
     cout<<A[i]<<endl;
	return 0;
}


