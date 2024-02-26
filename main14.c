#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int admission, fee, online_reg, id;
	printf("Enter 1 for yes and 0 for no \n");
	printf("Do you have your admission letter? \n");
	scanf("%d", &admission);
	
//	decision making

	if(admission == 1){
		printf("have you paid your fees \n");
		scanf("%d", &fee);
		
		if (fee == 1){
			printf("have you completed your registration? \n");
			scanf("%d", &online_reg);
			
			if (online_reg == 1){
				printf("have you gotten your id card \n");
				scanf("%d", &id);
				
				if (id == 1){
				printf("Congratulations, your room number is___ in ___ hall \n");
				}else
				printf("go and collect your id card\n");
				
			}else
			printf("go and do your registration\n");
			
		}else
			printf("go and pay your fees!!! \n");
	}else
			printf("go and get your admission letter\n");
	
	return 0;
}
