#include<stdio.h>
int main(){
	int a ,b,c;
	printf("enter the entigers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&b<c){
		printf("c max");
	}
	else if(b<c&&c<a){
		printf("a max");
	}
	else if(c<a&&a<b) {
		printf("b max");
	}
}
