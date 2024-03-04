#include <stdio.h>

int main() {
    int total_score = 0;
    int number_of_students = 5;
    int score, index;

    for (index = 1; index <= number_of_students; index++) {
        printf("Enter score for student %d: ", index);
        scanf("%d", &score);
        total_score += score;
    }

    double average_score = (double)total_score / number_of_students;

    printf("Average score: %.2f\n", average_score);

    return 0;
}

