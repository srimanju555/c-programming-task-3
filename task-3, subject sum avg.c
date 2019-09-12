#include<stdio.h>
int main()
{
	int english, maths, physics;
	int total, average, percentage;
	printf("Enter the 3 subjtect marks: \n");
	scanf("%d,%d,%d", &english, &maths, &physics);
	total = english+maths+physics;
	average = total/3;
	percentage = (total/300)*100;
	
	printf("total marks: %d\n", total );
	printf("average marks: %d\n", average);
	printf("percentage: %d\n", percentage);
	return 0;
}
