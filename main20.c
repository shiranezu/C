#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float weight;
	printf("Enter your weight: \n");
	scanf("%f", &weight);
	
	if (weight>=90){
		printf("you should be taking vine seedless grapes and fruit salads \n");
	}else
		if (weight>=80){
			printf("you should be taking beans, watermelon and cereal \n");
		}else
			if (weight>=60){
				printf("you should be taking vegetables with dried fish and uncreamed coleslaw\n");
			}else
				if (weight>=41){
					printf("you should be taking eggs, cereal, milk and bread \n");
				}else
					if (weight>=16){
						printf("you should be taking boiled yams, fish, meat and beans \n");
					}else
						if (weight>=10){
							printf("you should be taking eggs, swallow, beans, bread and moinmoi \n");
						}else
							printf("you're too overweight bruv \n");
	
	
	return 0;
}
