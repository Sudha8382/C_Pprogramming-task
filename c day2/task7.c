#include<stdio.h>
int main(){
	float temp;
	printf("enter the tempreture \n");
	scanf("%f",&temp);
	printf("tempreture=%f\n",temp);
	if(temp<0){
		printf("freezing weather\n");
//		exit(0);
	}
	else if(temp>=0||temp<=10)
	{
		printf("very cold weather\n");
	}
}
