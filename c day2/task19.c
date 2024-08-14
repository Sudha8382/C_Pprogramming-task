#include<stdio.h>
int main(){
	char ch;
	printf("enter the gender:");
	scanf("%c",&ch);
	switch(ch);
	case 'm':
	case 'M':
	printf("male");
	break;
	case 'f':
	case 'F':
	printf("female");
	default:
	printf("unspecified gender:");	
}
