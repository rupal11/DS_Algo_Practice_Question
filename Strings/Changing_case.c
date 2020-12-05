#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char A[20];
	int i;
	printf("Enter a word : ");
	scanf("%s",A);
	for(i=0;A[i]!='\0';++i)
	{
	    if(A[i]>=65 && A[i]<=90)
	     A[i]+=32;
	    else if(A[i]>=97 && A[i]<=122)
	     A[i]-=32;
	     
	}
	printf("Word : %s ",A);
	return 0;
}