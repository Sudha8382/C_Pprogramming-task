void main(){
	int i,n,sum=0;
	printf("enter the term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
		sum+=i;
	}
	printf("\n");
	printf("sum=%d ",sum);
}
