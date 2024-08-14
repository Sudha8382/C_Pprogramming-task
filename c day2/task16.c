#include<stdio.h>
int main(){
	int num1,num2;
	float result;
	char ch;
	printf("enter 1st num:");
	scanf("%d",&num1);
	printf("enter the 2nd num:");
	scanf("%d",&num2);
	printf("enter the operator:");
	scanf(" %c",&ch);
	result=0;
	switch(ch){
		case '+':
			result=num1 + num2;
			break;
			case '-':
				result= num1 - num2;
				break;
				case '*':
					result=num1*num2;
					break;
					case '/':
						result= num1/num2;
						break;
						case '%':
							result=num1%num2;
							break;
							default:
								printf("enter valid operator\n");
	}
	printf ("Result: %d %c %d = %f\n", num1, ch, num2, result);
  return 0;
}
