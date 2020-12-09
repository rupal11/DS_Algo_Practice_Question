#include <stdio.h>
#include <string.h>

int main() {
	char A[20],B[20];
	int i,j;
	int flag=1;
	printf("Enter a word : ");
	gets(A);
	for(i=0;A[i]!='\0';++i);
	--i;
	for(j=0;i>=0;++j,--i)
	    B[j]=A[i];
	B[j]='\0';
	for(i=0;A[i]!='\0';++i)
	{
	    if(A[i]!=B[i])
	     flag=0;
	}
	if(flag)
	 printf("%s is palindrome.",A);
	else
	printf("%s is not palindrome.",A);
	return 0;
}

