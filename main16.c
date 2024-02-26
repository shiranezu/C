#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age, score;
	printf("enter your age\n");
	scanf("%d", &age);
	if (age>10){
	printf("enter your score\n");
	scanf("%d", &score);
	if (score>30)
	printf("you are eligible");
	}
	return 0;
}
