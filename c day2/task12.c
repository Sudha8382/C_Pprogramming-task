#include <stdio.h>
int main(){
		char sign;
		printf("enter the character:\n");
		scanf("%c",&sign);
		if((sign>='a'&&sign<='z')||(sign>='A'&&sign<='Z')){
			printf("Character\n");
		}
		else if(sign>=0&&sign<=9){
			printf("digits\n");
		}
		else{
			printf("special symbols\n");
		}
	}

