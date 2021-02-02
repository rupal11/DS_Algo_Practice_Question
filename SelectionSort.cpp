#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void SelectionSort(int *A,int n)
{
    int i,j,k;
    for(i=0;i<n-1;++i)
    {
        for(j=k=i;j<n;++j)
        {
            if(A[j]<A[k])
            {
             k=j;
            }
            swap(A[i],A[k]);
        }
        
    }
}



int main() {
	int A[5]={10,90,12,7,2};
	int i;
	
	SelectionSort(A,5);
	
	for(i=0;i<5;++i)
	 cout<<A[i]<<" ";
	
	return 0;
}