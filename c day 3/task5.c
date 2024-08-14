void main(){
	int n,reverse,remainder=0;
	printf("enter the integer:");
	scanf("%d",&n);
	while(n!=0){
		remainder=n%10;
		reverse=10*reverse+remainder;
		n=n/10;
	}
	printf("%d ",reverse);
}
