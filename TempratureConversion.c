#include<stdio.h>

#define step 10

int main(void){
	int start= -40;
	int end =220;

	int i=0;

	printf("Farhenhiet    Celsius\n");

	for ( i = start; i <=end; i=i+step)
	{
		printf("%6d %14.3f\n",i,((5.0/9)*(i-32) ));
	}

	return 0;

}