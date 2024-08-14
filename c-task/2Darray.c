//wap to input 5 subject marks of 3 students and calculate total and percentage
#include<stdio.h>
void main(){
	int i,marks[3][5]={{12,45,34,24,58},{12,34,76,34,98},{76,44,33,65,90}};//15*4=60 bytes
//	printf("%d",marks[2][0]);
int sum=0;
for(i=0;i<=4;i++){
	printf("%d ",marks[1][i]);
	sum+=marks[1][i];
}
printf(" sum of marks:%d",sum);
}
