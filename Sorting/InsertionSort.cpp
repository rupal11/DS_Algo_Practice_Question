#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void InsertionSort(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;++i)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
             A[j+1]=A[j];
             j--;
        }
        A[j+1]=x;
    }
}


int main() {
	int A[5]={10,90,12,7,2};
	int i;
	
	InsertionSort(A,5);
	
	for(i=0;i<5;++i)
	 cout<<A[i]<<" ";
	
	return 0;
}