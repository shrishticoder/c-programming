#include <stdio.h>

int main() {
    int a, b;
    char op, choice;
    do {
        printf("Enter first number: ");
        scanf("%d", &a);
        
        printf("Enter second number: ");
        scanf("%d", &b);

        printf("Enter operator: ");
        scanf(" %c", &op);

        switch (op) {
        case '+' : 
            printf("Addition is : %d\n", a + b);
            break;
        case '-' : 
            printf("Subtraction is : %d\n", a - b);
            break;
        case '*' : 
            printf("Multiplication is : %d\n", a * b);
            break;
        case '/' : 
            if(b != 0) {
                printf("Division is : %d\n", a / b);
            } else {
                printf("Division by zero is undefined.\n");
            }
            break;
        case '%' : 
            if(b != 0) {
                printf("Modulo is : %d\n", a % b);
            } else {
                printf("Modulo by zero is undefined.\n");
            }
            break;
        default : 
            printf("Invalid operator\n");
    }

    printf("Do you want to perform another calculation? (y/n): ");
    scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you!\n");

    return 0;
}
    