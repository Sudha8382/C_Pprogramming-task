#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	switch(n%2){
		case 0:
			printf("even number");
			break;
			case 1:
				printf("odd number");
				break;
	}
}
