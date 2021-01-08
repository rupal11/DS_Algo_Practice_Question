#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void BubbleSort(int *A,int n)
{
    int i,j,flag;
    for(i=0;i<n-1;++i)
    {
        flag=0;
        for(j=0;j<n-1-i;++j)
        {
            if(A[j]>A[j+1])
            {
             swap(A[j],A[j+1]);
             flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

int main() {
	int A[5]={10,90,12,7,2};
	int i;
	
	BubbleSort(A,5);
	
	for(i=0;i<5;++i)
	 cout<<A[i]<<" ";
	
	return 0;
}
