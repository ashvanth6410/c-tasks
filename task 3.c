#include<stdio.h>
int main(){
	char name[40];
	int age;
	float mark1,mark2,average;
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your first mark : ");
	scanf("%f",&mark1);
	printf("Enter your second name : ");
	scanf("%f",&mark2);
	average =(mark1+mark2)/2;
	printf("-----------------------------------\n");
	printf("STUDENT DETAILS :\n");
	printf("NAME                 : %s\n",name);
	printf("AGE                  : %d\n",age);
	printf("FIRST MARK           : %.1f\n",mark1);
	printf("SECOND MARK          : %.1f\n",mark2);
	printf("AVERAGE OF %.1f AND %.1f : %.2f\n",mark1,mark2,average);
	printf("-----------------------------------\n");	
	return 0;
}