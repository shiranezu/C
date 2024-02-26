#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int subtraction(int x, int y);
int main(int argc, char *argv[]) {
	int a,b;
	printf("Input the two values: ");
	scanf("%d %d", &a, &b);
	printf("the subtraction is %d\n", subtraction(a, b));
	return 0;
}
int subtraction(x,y){
	int sub;
	sub = x-y;
	return sub;
}
