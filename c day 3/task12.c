#include<stdio.h>
int main(){
int i ,j,n;
printf("enter the num:");
scanf("%d",&n);
for(i=1;i<=10;i++){
	for(j=1;j<=n;j++){
	printf(" %d   ",i*j);
}
printf("\n\n");
}
return 0;
}
