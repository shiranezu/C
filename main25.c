//a program that collects list of odd numbers between 100 till 1000
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("list of odd numbers between 100 to 1000\n");
	for(n=100;n<=1000;n++){
		if(n%2==0){
			printf("the odd numbers are: %d \n", n);
		}
	}
	return 0;
}
