#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char phone, sim, reg, credit;
	printf("enter y for yes and n for no \n");
	printf("do you have a phone?\n");
	scanf(" %c", &phone);
//	decision making
	if(phone == 'y'){
		printf("have you gotten a sim yet? \n");
		scanf(" %c", &sim);
		if(sim == 'y'){
			printf("is your sim registered? \n");
			scanf(" %c", &reg);
			if(reg == 'y'){
				printf("do you have credit? \n");
				scanf(" %c", &credit);
				if(credit == 'y')
				printf("your sim is now fully functional!!! \n");
			}else
			printf("Please load credit as soon as possible, or dial *202# to borrow airtime today!!! \n");
		}else
		printf("Please head to our nearest call center to register your sim card. \n");
	}else
	printf("Please buy a sim today!. /n");
	return 0;
}
