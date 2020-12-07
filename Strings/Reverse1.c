#include <stdio.h>
#include <string.h>

int main() {
	char A[20],B[20];
	int i,j;
	printf("Enter a word : ");
	gets(A);
	for(i=0;A[i]!='\0';++i);
	--i;
	for(j=0;i>=0;++j,--i)
	    B[j]=A[i];
	B[j]='\0';
	printf("\nReversed string : %s",B);
	return 0;
}


