#include<stdio.h>
int main(){
	float a,b,c,d,e;
	printf("enter the marks:");
	scanf("%f %f %f %f %f\n",&a,&b,&c,&d,&e);
	 float total_marks=a+b+c+d+e;
	  float percentage=(total_marks/500)*100;
	  printf("total marks:%f\n",total_marks);
	  printf("percentage:%f\n",percentage);
	  if(percentage>90){
	  	printf("A grade");
	  }
	  else if(percentage>=75&&percentage<=90){
	  	printf("B grade");
	  }
	  else if(percentage>=61&&percentage<75)
	{
	  printf("C grade");
}
      else if(percentage>=46&&percentage<=60){
      	printf("D grade");
	  }
	  else if(percentage>=36&&percentage<=45){
	  	printf("E Grade");
	  }
	  else if(percentage>35){
	  	printf("fail");
	  }
}
