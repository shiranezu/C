//a program that gets the age of srudents and returns the average and sum
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int stud = 3;
	int ages[stud];
	int i, sum = 0;
	float average;
	
	//taking input for ages
	
	printf("enter the ages of  %d candidates: \n", stud);
	for(i = 0;i<stud;i++){
		scanf("%d", &ages[i]);
		sum += ages[i];
	}
	
	// calculating average age
	average = sum/stud;
	
	//outputting sum and average age
	printf("the sum of ages: %d\n", sum);
	printf("average age: %.2f\n", average);
	
	return 0;
}
