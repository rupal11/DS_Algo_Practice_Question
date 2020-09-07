#include <iostream>
using namespace std;

void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"\nMove disk from "<<A<<" to "<<C;
        TOH(n-1,B,A,C);
    }
}

int main() {
    int n;
	cout<<"Tower of Hanoi\n";
	cout<<"Enter the no. of disks : ";
	cin>>n;
	TOH(n,1,2,3);
	return 0;
}
