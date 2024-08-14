#include<stdio.h>
int main(){
float a,b,c;
printf("enter the 3 subject marks\n");
scanf("%f %f %f",&a,&b,&c);
float total=a+b+c;
 float percentage=(total*100)/300;
printf("total marks=%f\n",total);
printf("percentage=%f\n",percentage);
if(percentage>32){
	printf("first devision");
}
else{
printf("failed");
}
}
