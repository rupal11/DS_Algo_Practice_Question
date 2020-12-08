#include <stdio.h>
#include <string.h>

int main() {
	char A[20];
	char t;
	int i,j;
	printf("Enter a word : ");
	gets(A);
	for(j=0;A[j]!='\0';++j);
	--j;
	for(i=0;i<j;--j,++i)
	 {
	     t=A[i];
	     A[i]=A[j];
	     A[j]=t;
	 }
	printf("\nReversed string : %s",A);
	return 0;
}

