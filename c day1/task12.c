#include<stdio.h>
int main(){
	float pa,rate,time,si;
	printf("enter pa num:");
	scanf("%f",&pa);
	printf("enter rate num:");
	scanf("%f",&rate);
	printf("enter time num:");
	scanf("%f",&time);
	si=(pa*rate*time)/100;
	printf("%f",si);
}
