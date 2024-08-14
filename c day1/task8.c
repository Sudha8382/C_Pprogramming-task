#include<stdio.h>
int main(){
	int hour,minuts,second;
	printf("enter the no of seconds:");
	scanf("%d",&second);
	hour=second/60;
	minuts=(second%60)/60;
	second=second-((hour*60)+(minuts*60));
	printf(" hour=%d\n",hour);
	printf(" minuts=%d\n",minuts);
	printf(" second=%d\n",second);
	return 0;
}
