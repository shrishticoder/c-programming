#include <stdio.h>

int main() {
    int num, remainder;
    printf("Enter number : ");
    scanf("%d", &num);

    int originalNum = num;
    int reverseNum = 0;
    while(num != 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }
    printf("Reverse of %d is %d", originalNum, reverseNum);
    return 0;
}