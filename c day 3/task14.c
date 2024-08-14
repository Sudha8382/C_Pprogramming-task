#include<stdio.h>
int main(){
	int pass,n=10;
	while(n!=0){
		printf("enter the pass:");
		scanf("%d",&pass);
		if(pass==1234){
			printf("correct pass");
			break;
		}
		else{
			printf("incorrect pass\n");
		}
	}
	return 0;
}
