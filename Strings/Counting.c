#include <stdio.h>
#include <string.h>

int main() {
	char A[20];
	int i;
	int vcount=0,ccount=0,dcount=0,word=1;;
	printf("Enter a word : ");
	gets(A);
	for(i=0;A[i]!='\0';++i)
	{
	    if(A[i]=='a' || A[i]=='e' || A[i]=='i' ||
           A[i]=='o' || A[i]=='u' || A[i]=='A' ||
           A[i]=='E' || A[i]=='I' || A[i]=='O' ||
           A[i]=='U')
	      vcount++;
	    else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
	     ccount++;
	    else if (A[i]>='0' &&  A[i]<='9')
	     dcount++;
	    else if(A[i]==' ')
	     word++;
	}
	printf("Word : %s ",A);
	printf("\n\n No. of vowels : %d",vcount);
	printf("\n No. of consonants : %d",ccount);
	printf("\n No. of digits : %d",dcount);
	printf("\n No. of words : %d",word);
	
	return 0;
}

