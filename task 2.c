#include<stdio.h>
#define PI 3.14
int main(){
	char studentName[]="Ashvanth P S";
	int Marks=90;
	float Average=90.1;
	printf("-----------------------------\n");
	printf("Student Name : %d\n ",studentName);
	printf("Mark --------: %d\n",Marks);
	printf("Average -----: %d\n",Average);
	printf("-----------------------------\n");
	printf("Value of PI : %.2f\n",PI);
	printf("-----------------------------\n");
	if(Marks>40)
		printf("Result is pass\n");
	else
		printf("Result is fail");
	return 0;
}