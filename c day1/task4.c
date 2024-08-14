#include<stdio.h>
int main(){
	int m,n;
	printf("enter a number:");
	scanf("%d",&m);
	printf("enter the second num:");
	scanf("%d",&n);
	m=m+n;
	n=m-n;
	m=m-n;
	printf(" the value of m and n is=%d %d",m  ,n);

}
