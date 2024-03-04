// using switch case
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	printf("Enter your choice thats applicable to you: \n");
	printf("1. 10-15kg \n 2. 16-40kg \n 3. 41-60kg \n 4. 60-80kg \n 5. 80-90kg \n 6. 90 and above \n");

	// decision making
	printf ("please enter your choice: \n");
	scanf("%d", &choice);
	printf("....................\n");
	switch(choice){
		case 1:
			printf("eggs and cereal \n");
		break;
		
		case 2:
			printf("boiled yams and milk \n");
		break;
		
		case 3:
			printf("eggs and cereal \n");
		break;
		
		case 4:
			printf("uncreamed coleslaw and watermelon \n");
		break;	
				
		case 5:
			printf("beans and moinmoi");
		break;
		
		case 6:
			printf("vineless seedless grepes");
		break;
		default:;
	}
		printf("the choice you entered is not correct");
	
	return 0;
}
