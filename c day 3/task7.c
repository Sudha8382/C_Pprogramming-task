#include<stdio.h>
#include<math.h>
void main(){
	int n ,i,result=0,remainder;
	printf("enter a number:");
	scanf("%d",&n);
	i=n;
	while(n!=0){
		remainder=n%10;
		result=pow(remainder,n);
		n=n/10;
	}
	printf("%d ",result);
}

