//assignment
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int age, score;
	printf("enter age: \n", age);
	scanf("%d", &age);
	
	printf("enter score: \n", score);
	scanf("%d", &score);
	
	if (age < 16 && score < 180)
	{
	printf("Admission denied");
	}
	
	else if(age = 16 && score = 180)
	{
	printf("you can pick another course, if you'd like'");	
	}
	
	else;
	{
		printf("Admission accepted");
	}
	
	return 0;
}
