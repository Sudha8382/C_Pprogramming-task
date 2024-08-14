#include<stdio.h>
int main(){
int a,b,c;
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
printf("before checking all numbers=%d %d %d \n",a,b,c);
if(a>b&&a>c){
	printf("a is the biggest number:\n");
}
if(b>a&&b>c){
		printf("b is the biggest number:\n");
}
if(c>a&&c>b){
		printf("c is the biggest number:");
}
}
