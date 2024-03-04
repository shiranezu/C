//Develop a c application that dispenses call card of different network.
#include <stdlib.h>
#include <stdio.h>
int main() {
    int network, amount;

    printf("Select a network:\n");
    printf("1. MTN\n2. GLO\n3. Airtel\n4. Etisalat\n");
    scanf("%d", &network);

    printf("Enter the amount: ");
    scanf("%d", &amount);

    switch (network) {
        case 1: // MTN
            if (amount == 100 || amount == 200 || amount == 500) {
                printf("Dispensing MTN call card of %d Naira\n", amount);
            } else {
                printf("Invalid amount for MTN network\n");
            }
            break;

        case 2: // GLO
            if (amount == 100 || amount == 200 || amount == 500) {
                printf("Dispensing GLO call card of %d Naira\n", amount);
            } else {
                printf("Invalid amount for GLO network\n");
            }
            break;

        case 3: // Airtel
            if (amount == 100 || amount == 200 || amount == 500) {
                printf("Dispensing Airtel call card of %d Naira\n", amount);
            } else {
                printf("Invalid amount for Airtel network\n");
            }
            break;

        case 4: // Etisalat
            if (amount == 100 || amount == 200 || amount == 500) {
                printf("Dispensing Etisalat call card of %d Naira\n", amount);
            } else {
                printf("Invalid amount for Etisalat network\n");
            }
            break;

        default:
            printf("Invalid network selection\n");
    }

    return 0;
}
