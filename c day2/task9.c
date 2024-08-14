#include<stdio.h>
int main(){
float units,bill;
printf("enter the units: ");
scanf("%f",&units);
if(units>=0&&units<200){
	bill=units*1.20;
	printf("%f",bill);
}
else if(units>200&&units<400){
	bill=200*1.20+(units-200)*1.50;
	printf("&f",bill);
}
else if(units>400&&units<=600){
bill=200*1.20+400*1.50+(units-400)*1.80;
printf("%f",bill);
}
else if(units>600){
	bill=200*1.20+400*1.50+600*2+(units-600)*2;
	printf("%f",bill);
}
}

