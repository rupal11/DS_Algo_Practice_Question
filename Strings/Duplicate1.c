#include <stdio.h>
#include <string.h>

int main(void) {
	char A[50];
	int H[26]={0},i,flag=1;
	
	printf("Enter a word :");
	gets(A);
	
	for(i=0;A[i]!='\0';++i)
	{
	    H[A[i]-97]++;
	}
	for(i=0;i<26;++i)
	{
	    if(H[i]>1)
	    {
	        printf("\nThe character %c occurs %d times.",i+97,H[i]);
	        flag=0;
	    }
	}
	if(flag==1)
	 printf("\nNo character occur more than one time.");
	return 0;
}

