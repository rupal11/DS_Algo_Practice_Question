#include <stdio.h>
#include <string.h>

int main() {
	char A[20];
	int i,j;
	int flag=1;
	printf("Enter a word : ");
	gets(A);
	for(j=0;A[j]!='\0';++j);
	--j;
	for(i=0;i<=j;++i,--j)
	{
	    if(A[i]!=A[j])
	     flag=0;
	}
	if(flag)
	 printf("\n %s is palindrome.",A);
	else
	printf("\n %s is not palindrome.",A);
	return 0;
}

