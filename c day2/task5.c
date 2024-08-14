#include<stdio.h>
int main(){
	float cor1,cor2;
	printf("enter the cordinate:\n");
	scanf("%f %f",&cor1,&cor2);
	if(cor1>0&&cor2>0){
		printf("1st cordinate");
	}
	else if(cor1<0&&cor2>0){
		printf("2nd coordinate");
	}
	else if(cor1<0&&cor2<0){
		printf("3rd coordinate");
	}
	else if(cor1>0&&cor2<0){
		printf("4rth coordinate");
	}
}
