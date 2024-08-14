/*
1
2 2
3 3 3
4 4 4 4
*/
//#include<stdio.h>
//void main(){
//	int i,j;
//	for(i=1;1<=4;i=i+1){
//		for(j=1;j<=i;j=j+1){
//		printf("%d\n ",5-i);
//	}
//	printf("\n");
//}
//}
/*
1
1 2
1 2 3
1 2 3 4

*/
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j=j+1){
//			printf("%d  ",j);
//		}
//		printf("\n");
//	}
//}

/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
void main(){
	int i,j;
	for(i=1;i<=5;i=i+1){
		for(j=5;j>=i;j=j-1){
			printf("%d ",6-j);
		}
		printf("\n");
	}
}
