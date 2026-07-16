#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 91 && marks <= 100) {
        printf("A1");
    } else if(marks >= 81 && marks <= 90) {
        printf("A2");
    } else if(marks >= 71 && marks <= 80) {
        printf("B1");
    } else if(marks >= 61 && marks <= 70) {
        printf("B2");
    } else if(marks >= 51 && marks <= 60) {
        printf("C1");
    } else if(marks >= 41 && marks <= 50) {
        printf("C2");
    } else if(marks >= 33 && marks <= 40) {
        printf("D");
    } else if(marks >= 0 && marks <= 32) {
        printf("E");
    } else {
        printf("Invalid marks");
    }

    return 0;
}