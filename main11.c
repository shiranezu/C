// a program that gets the area of a parallelogram
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int base, height, area;
	printf("Enter your base: \n");
	scanf("%d", &base);
	
	printf("Enter your height: \n");
	scanf("%d", &height);
	
	area = base*height;
	printf("Area will be: %d", area);
	return 0;
}
