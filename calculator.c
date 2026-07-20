#include <stdio.h>

int main() {
    int a, b;
    char op, choice;

    printf("\n===== Simple Calculator =====\n\n");
    do {
        printf("Enter first number: ");
        scanf("%d", &a);
        
        printf("Enter second number: ");
        scanf("%d", &b);

        printf("Enter operator: ");
        scanf(" %c", &op);

        switch (op) {
        case '+' : 
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-' : 
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*' : 
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/' : 
            if(b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Division by zero is undefined.\n");
            }
            break;
        case '%' : 
            if(b != 0) {
                printf("%d %% %d = %d\n", a, b, a % b);
            } else {
                printf("Modulo by zero is undefined.\n");
            }
            break;
        default : 
            printf("Invalid operator\n");
    }

    printf("\nDo you want to perform another calculation? (y/n): ");
    scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using this calculator!\n");

    return 0;
}
    
