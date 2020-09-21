#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int BinarySearch(int A[],int n,int key)
{
    int l,h,mid;
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2; 
        if(key==A[mid])
         return mid;
        else if(key<A[mid])
         h=mid-1;
         else 
         l=mid+1;
    }
    return -1; 
}
int main() {
	int i,n,k,key;
	cout<<"Enter the size of array :";
	cin>>n;
	int A[n];
	cout<<"\nEnter the elements : ";
	for(i=0;i<n;++i)
	 cin>>A[i];
	sort(A,A+n);
	cout<<"\nEnter the value you want to search : ";
	cin>>key;
	k=BinarySearch(A,n,key);
	if(k==-1)
	 cout<<"\nElement does not exist.";
	else
	 cout<<"\nElement "<<key<<" exist at "<<k+1<<" index";
	return 0;
}
