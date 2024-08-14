#include<stdio.h>
int main(){
	int a;
	printf("enter the numbers:\n");
	scanf("%d",&a);
	printf("given a numbers=%d\n",a);
	if(a%2==0){
		printf("even number");
	}
	else{
		printf("odd number");
	}
}
