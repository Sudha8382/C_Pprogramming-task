#include<stdio.h>
int main(){
	float side1,side2,side3;
	printf("enter the sides:\n");
	scanf("%f %f %f",&side1,&side2,&side3);
	printf("all three sides are:%f %f %f\n",side1,side2,side3);
	if(side1==side2&&side2==side3){
		printf("equilateral");
	}
	else if(side1==side2||side2==side3||side3==side1)
	{
		printf("isosceles");
	}
	else{
		printf("scalene");
	}
}
