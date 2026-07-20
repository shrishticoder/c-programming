#include <stdio.h>

int main() {
    int marks;

    printf("\n===== Grade Calculator =====\n\n");

    printf("Enter marks : ");
    scanf("%d", &marks);

    printf("\n-----------Result-----------\n");
    printf("Marks      : %d\n", marks);
    if(marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    } else {
        printf("Percentage : %d%%\n", marks);

        if(marks >= 91 && marks <= 100) {
            printf("Grade      : A1\n");
        } else if(marks >= 81 && marks <= 90) {
            printf("Grade      : A2\n");
        } else if(marks >= 71 && marks <= 80) {
            printf("Grade      : B1\n");
        } else if(marks >= 61 && marks <= 70) {
            printf("Grade      : B2\n");
        } else if(marks >= 51 && marks <= 60) {
            printf("Grade      : C1\n");
        } else if(marks >= 41 && marks <= 50) {
            printf("Grade      : C2\n");
        } else if(marks >= 33 && marks <= 40) {
            printf("Grade      : D\n");
        } else {
            printf("Grade      : E\n");
        }

            
        if(marks >= 33) {
            printf("Result     : PASS\n");
        } else {
            printf("Result     : FAIL\n");
        }
    }

    printf("----------------------------");
    return 0;
}
