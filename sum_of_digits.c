#include <stdio.h>

int main() {
    int num, remainder;
    printf("Enter number : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Please enter a non-negative number\n");
    } else {
        int originalNum = num;
        int sum = 0;

        while(num > 0) {
            remainder = num % 10;
            sum += remainder;
            num /= 10;
        }
        
        printf("Sum of digits of %d is %d\n", originalNum, sum);
    }
    
    return 0;
}

