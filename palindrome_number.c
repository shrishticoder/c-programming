#include <stdio.h>

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int reverseNum = 0;
    int originalNum = num;

    if(num < 0) {
        printf("Please enter a non- negative integer.\n");
    } else {
        while(num > 0) {
            int remainder = num % 10;
            reverseNum = reverseNum * 10 + remainder;
            num /= 10;
        }
        
        if(originalNum == reverseNum) {
            printf("%d is a palindrome number.\n", originalNum);
        } else {
            printf("%d is not a palindrome number.\n", originalNum);
        }
    }
    return 0;
}