#include <iostream>

using namespace std;

void max_min(int A[],int n)
{
    int i;
    int max=A[0];
    int min=A[0];
    
    for(i=0;i<n;++i)
    {
        if(A[i]<min)
         min=A[i];
        else if(A[i]>max)
         max=A[i];
    }
    cout<<"Minimum = "<<min<<endl;
    cout<<"Maximum = "<<max<<endl;
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
    max_min(A,n);
	return 0;
}

