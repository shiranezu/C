#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int a, b;
//	printf("enter a: ", a);
//	scanf("%d", &a);
//	
//	printf("enter b: ", b);
//	scanf("%d", &b);
//	
////	printf("enter c: ", c);
////	scanf("%d", &c);
//	
//	if (a>b)
//	{
//		printf("a is greater");
//	}
//		else if(b>a);
//			{
//				printf("b is greater");
//			}

	int a, b, c, d, e, largest;
	printf("Enter the 5 numbers; \n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	largest = a;
	if(b>largest){
		largest = b;
	}
	if(c>largest){
		largest = c;
	}
	if(d>largest){
		largest = d;
	}
	if(e>largest){
		largest = e;
	}
	printf("The largest number is %d", largest);
	return 0;
}
