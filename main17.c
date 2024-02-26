// task 4 page 40
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int age, score;
	printf("enter your score: \n");
	scanf("%d", &score);
	
	printf("enter your age: \n");
	scanf("%d", &age);

// decision making

	if (age<1){
	printf("you qualify for baby class\n");
	}else
		if (age>=1&&age<=2&&score>=60){
		printf("your child qualifies for playgroup \n");
		}else
			if (age>=2&&age<=3&&score>=70){
			printf("your child qualifies for pre-nursery \n");
			}else
				if (age>=3&&age<=4&&score>=80){
				printf("your child qualifies for nursery 1 \n");
				}else
					if (age>=4&&age<=5&&score>=90){
					printf("your child qualifies for nursery 2 \n");
					}else
						if (age>=5&&age<=6&&score>=50){
						printf("your child qualifies for Primary 1 \n");
						}else
							if (age>=6&&age<=7&&score>=60){
							printf("your child qualifies for Primary 2 \n");
							}else
								if (age>=7&&age<=8&&score>=70){
								printf("your child qualifies for Primary 3 \n");
								}else
									if (age>=8&&age<=9&&score>=80){
									printf("your child qualifies for Primary 4 \n");
									}else
										if (age>=9&&age<=10&&score>=90){
										printf("your child qualifies for Primary 5 \n");
										}else
										printf("there is no class you are qualified to enter.");
	return 0;
}
