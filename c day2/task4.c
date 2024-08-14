#include<stdio.h>
int main(){
	int year;
	printf("enter the year:\n");
	scanf("%d",&year);
	printf("year:%d\n",year);
	if(year%400==0||year%4==0){
		printf("leap year");
		
	}
	else {
		printf("it is not leap year:");
	}
}

