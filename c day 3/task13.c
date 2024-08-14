#include<stdio.h>
void main(){
	int i,n,remainder,sum=0;
	printf("enter the digit:");
	scanf("%d",&n);
	while(n!=0){
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("%d",sum);
}
