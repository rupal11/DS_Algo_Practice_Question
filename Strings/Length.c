#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char s[20];
	int i;
	printf("Enter a word : ");
	scanf("%s",s);
	for(i=0;s[i]!='\0';++i);
	printf("Length of string is : %d\n",i);
	return 0;
}
